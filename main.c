#include <stdio.h>
#include <stdlib.h>
#include "rollDice.h"
#include "playGame.h"
#define WON 1
#define LOSE 0

/*
* Title: Assignment #1 - Dice Game
* Course: CST8234 C Language
* @Author: <<Liam Chatland (041000031)>> <<Kadija Adamou Allagouma (enter your id)>>      
* Lab Section: 011
* Professor: Surbhi Bahri
* Due date: 03/11/2022
* Submission date: 00/00/0000
*/



/********************************************************************************
 * Function Name: header 
 * Purpose: Prints out Game stats for users benefit 
 * Function in parameters: void 
 * Function out parameter: int: 0 
 * Version: 1 
 * Author:  <<Kadija_Adamou_Allagouma>>
 * *****************************************************************************/ 
int header(){
    printf("------------------------------------------------------------------------------------------------------------------\n");
    printf("%15s %15s %15s %20s %25s ", "ROLL NUM", "DICE#1", "DICE#2", "TOTAL ROLL", "POINT MATCH\n");
    printf("------------------------------------------------------------------------------------------------------------------\n");
    return 0;
}



/********************************************************************************
 * Function Name: firstPlay 
 * Purpose:  
 * Function in parameters: void 
 * Function out parameter: LOSE or WIN macros 
 * Version: 1 
 * Author:  <<Kadija_Adamou_Allagouma>>
 * *****************************************************************************/
int firstPlay(){
   int firstRoll = rollDice();
   int secondRoll = rollDice();

    if((firstRoll + secondRoll) == 7 || (firstRoll + secondRoll) == 11 ) {
        return WON;
    } if((firstRoll + secondRoll) == 2 || (firstRoll + secondRoll) == 3  || (firstRoll + secondRoll) == 12 ) {
        return LOSE;
    }
}


/********************************************************************************
 * Function Name: main 
 * Purpose: Main Structure of program, calls all necessary functions
 * Function in parameters: void 
 * Function out parameter: EXIT_SUCCESS 
 * Version: 1 
 * Author: <<Liam_Chatland>> , <<Kadija_Adamou_Allagouma>>
 * *****************************************************************************/
int main(){
    int playAgain;
    while(1){
        char play;
        printf("Please enter [y or Y] to play Dice or [n or N] to exit:\n");
        scanf("%c",&play);
        if(play == 'y' || play == 'Y'){
            break;   
        }else if(play == 'n' || play == 'N'){
            printf("Exiting...\n");
            exit(EXIT_SUCCESS);
        }else{
            printf("Wrong input please try again\n");
            
        }
    }
    do{
        playAgain = playGame(50);    
    }while(playAgain == 1);
       

    //playGame() Function (gonna move to seperate file later)
    /*char roll;
    int firstRoll;
    int secondRoll;
    printf("ROLL THE DICE [ENTER], to QUIT enter [q]: ");
    scanf("%s", &roll);
    
    firstRoll = rollDice();
    secondRoll = rollDice();

    do{
    if (strcmp(&roll, "") == 0){
       printf(firstPlay()); 
        scanf("%s", &roll);
    } else if (strcmp(&roll, "q") == 0) {
        printf("Exiting..\n");
    } else {
        printf("Error... You must Enter either 'ENTER' or 'q\n");
    }
    }while(&roll != "q");*/
}
