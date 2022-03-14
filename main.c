/**
 * Title: Lab Assesment #1 - Dice Game Implementation 
 * Course: CST8234 C Language
 * @author: Kadija Allagouma
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
    int balance = 50;
    int result;
    do{
    int result = playGame(balance);
    }while(result == WON || result == LOSE);
   /*if(result == WON){
       printf("YOU WON!\n");
   } else if (result == LOSE){
       printf("YOU LOST!\n");
   } else {
        printf("Exiting\n");
   }*/
    
    return EXIT_SUCCESS;
    
}/*end of main*/
