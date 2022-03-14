/**
 * Title: Lab Assesment #1 - Dice Game Implementation 
 * Course: CST8234 C Language
 * @author: Kadija Allagouma & Liam Chatland
 * Due date: 2022-03-13
 * Submission date: 03/13/22
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "rollDice.h"
#include "playGame.h"







/****************************************************************************************************************
 Function Name: main
 Purpose: This is the driver function it allows us to run out code
 Function in parameter: void
 Funciton out parameter: EXIT_SUCCESS
 Version: 1
 Author: Kadija Allagouma and Liam Chatland
***************************************************************************************************************/
int main(){
    here:
    while(1){
        int balance = 50;
        int result;
        do{
            if(balance<=0){
                while(1){
                    char userInput;
                    printf("You have no more funds. Start over? [y/n]?\n");
                    scanf("%s",&userInput);
                    if(userInput == 'y'){
                        goto here;
                    }else if (userInput == 'n'){
                        printf("Thank you for playing! GoodBye...");
                        exit(EXIT_SUCCESS);
                    }else{
                        printf("Invalid input.. try again\n");
                    }
                }
            }
            printf("You Have %d Dollars!\n",balance);
            int result = playGame(&balance);
        }while(1);
   
    
    return EXIT_SUCCESS;
}
}/*end of main*/
