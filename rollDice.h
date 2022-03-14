/**
 * Title: Lab Assesment #1 - Dice Game Implementation 
 * Course: CST8234 C Language
 * @author: Kadija Allagouma & Liam Chatland
 * Due date: 2022-03-13
 * Submission date: 03/13/22
 */



/****************************************************************************************************************
 Function Name: rollDice
 Purpose: Gets a random number between 1-6
 Function in parameter: void
 Funciton out parameter: int
 Version: 1
 Author: Kadija Allagouma and Liam Chatland
***************************************************************************************************************/
int rollDice(void){
    return(rand()%7);
}
