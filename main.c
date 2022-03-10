#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rollDice.h"

/*
* Title: Assignment #1 - Dice Game
* Course: CST8234 C Language
* @Author: <<< Liam Chatland (041000031)  <<<   >>>     <<<   >>>   
* Lab Section: 011
* Professor: Surbhi Bahri
* Due date: 03/11/2022
* Submission date: 00/00/0000
*/

/********************************************************************************
 * Function Name: main 
 * Purpose: abjkndx,asm c.a 
 * Function in parameters: void 
 * Function out parameter: EXIT_SUCCESS 
 * Version: 1 
 * Author: XYZ 
 * *****************************************************************************/ 
header(void){
    printf("------------------------------------------------------------------------------------------------------------------\n");
    printf("%15s %15s %15s %20s %25s ", "ROLL NUM", "DICE#1", "DICE#2", "TOTAL ROLL", "POINT MATCH\n");
    printf("------------------------------------------------------------------------------------------------------------------\n");
}

int firstPlay(void){
   int firstRoll = rollDice();
   int secondRoll = rollDice();

    if((&firstRoll + &secondRoll) == 7 || (&firstRoll + &secondRoll) == 11 ) {
        return WON;
    } if((&firstRoll + &secondRoll) == 2 || (&firstRoll + &secondRoll) == 3  || (&firstRoll + &secondRoll) == 12 ) {
        return LOOSE;
    }
}

int main(){
    char roll[6];
    int firstRoll;
    int secondRoll;
    printf("ROLL THE DICE [ENTER], to QUIT enter [q]: ");
    scanf("%s", &roll);
    
    firstRoll = rollDice();
    secondRoll = rollDice();

    do{
    if (strcmp(&roll, "enter") == 0){
       printf(firstPlay()); 
        scanf("%s", &roll);
    } else if (strcmp(&roll, "q") == 0) {
        printf("Exiting..\n");
    } else {
        printf("Error... You must Enter either 'ENTER' or 'q\n");
    }
    }while(&roll != "q");
}
