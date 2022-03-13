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
#define  WON 0
#define  LOOSE 1

int initialAmount = 50, minimumBets = 5;
int playGame(void){
    
   int bet, amountLost, amountGained, totalBets, bettingAmount; //Variables for keeping track of bets made
    char entry; //Variable to keep track of user entry

    do{ //do-while asking user if they'd like to play
        printf("Please enter [y or Y] to play Dice or [n or N] to exit: ");
        scanf("%s", &entry);
        if( strcmp(&entry, "y") == 0 || strcmp(&entry, "Y") == 0){
            printf("Lets begin\n"); //if user selects 'yes' control breaks out of the loop, the program proceeds
            break;
        } else if ( strcmp(&entry, "n") == 0 || strcmp(&entry, "N") == 0){
            return 2; //if user selects 'no' control goes back to main
        } else {
            printf("Invalid option\n"); //handles any other input that isn't 'y' or 'n'           
        }
    }while (strcmp(&entry, "n") || strcmp(&entry, "N"));

/**********************************************************************************************************/

    do{ //do-while to requesting user if they'd like to place a bet
        printf("Would you like to bet? [y/n] ");
        scanf("%s", &entry);
        if( strcmp(&entry, "y") == 0 ){
            break;//if user selects 'yes' control breaks out of the loop, the program proceeds
        } else if ( strcmp(&entry, "n") == 0){
            return 0;//if user selects 'no' control goes back to main
        } else {
            printf("Invalid option\n");//handles any other input that isn't 'y' or 'n'
        }
    }while (strcmp(&entry, "n") || strcmp(&entry, "N"));

/**********************************************************************************************************/

    do{ //do-while loop that manages the bets placed
        bet;
        totalBets = initialAmount / minimumBets;
        printf("You have %i, minimum bet is %i, you can make %i total bet(s): ", initialAmount, minimumBets, totalBets);
        scanf("%i", &bet);
        if (bet >= 1 && (bet <= totalBets)){ //if the bet placed is within the accepted range a new betting amount is calculated
            bettingAmount = bet * minimumBets;
             printf("You bet %i \n", bettingAmount);
             totalBets -= bet; //the amount bet is subtracted from the total bets available
            break;//once the user chooses an amount the bet control prceeds to the dice rolling loop 

        } else if( bet <= 0 ){ //if bet placed is less or equal to 0 an approiate message is displayed
            printf("Please enter a number between 1 - %i\n", totalBets);
        } else if(bet > totalBets){ //if bet placed is greater than the total bets availble to the user a message is displayed
            printf("Invaid bet \n");
        }else { //if user enters an invalid entry an appropriate error message is displayed 
            printf("Invalid option\n"); //NOT WORKING STUCK IN INFINITE LOOP!
        }
        
    }while(bet > totalBets || bet <= 0);
/*-------------------------------------------------------------------------------------------------------------------------*/
 
 
    srand(time(NULL));
    int firstRoll, secondRoll, person, computer, rollNum =0, totalRoll, pointMatch = 0, point; //Dice rolling variables
    char input; 
   
    while (strcmp(&input, "q") == 0|| pointMatch == 0){ 
    printf("ROLL THE DICE WITH [ENTER], TO QUIT enter [q] "); //user presses "Enter" key to roll the dice
    input = getchar();

    if((strcmp(&input, "q") == 0)){//if user enters q, the game is exited and control is to main
        return 2;
    } else{
        firstRoll = rollDice(); //first die
        secondRoll = rollDice(); //second die
        totalRoll = firstRoll + secondRoll; //sum of both rolls
        pointMatch = totalRoll;
        printf("------------------------------------------------------------------------------------------------------------------\n");
        printf("%15s %15s %15s %20s %25s ", "ROLL NUM", "DICE#1", "DICE#2", "TOTAL ROLL", "POINT MATCH\n"); //header
        printf("------------------------------------------------------------------------------------------------------------------\n");
        printf("%15i %15i %15i %20i %25i\n", rollNum, firstRoll, secondRoll, totalRoll, pointMatch); //output of first roll
    
        if(totalRoll == 7 || totalRoll == 11){ //if a player rolls either a 7 or 11 they win
            return WON;
        } else if (totalRoll == 2 || totalRoll == 3 || totalRoll == 12){ //if a player rolls either an 2, 3 or 12 they loose
            return LOOSE;
        } else {
           
        // printf("Point Match: %i\n", pointMatch);
        //    printf("ROLL THE DICE WITH [ENTER], TO QUIT enter [q] \n");
            input = getchar();
            rollNum++;
        }
    }/*end of else (near fristRoll)*/
    }/*end of while*/
    
/**********************************************************************************************************/
   
do { //do-while loop to determine the point match, if winner wasn't determined during the first round
    if((strcmp(&input, "q") == 0)){ //if user selects 'q' program is exited
        return 2;
    } 

    firstRoll = rollDice();
    secondRoll = rollDice();
    totalRoll = firstRoll + secondRoll; 
  
    printf("%15i %15i %15i %20i %25i\n", rollNum, firstRoll, secondRoll, totalRoll, pointMatch); //following tosses are displayed
    
    if(totalRoll >= pointMatch ){ //if total rolled is greater that the point match the player wins
        return WON;
    } else if(totalRoll == 7 || totalRoll == 11){ //if a '7' or '11' is rolled the player wins
        return WON;
    } else if (totalRoll == 2 || totalRoll == 3 || totalRoll == 12){ //if a '2', '3', '12' is rolled the player looses
        return LOOSE;
    } else{
        input = getchar();
        rollNum++;
    }
    }while (strcmp(&input, "q") || totalRoll >= pointMatch);
   
}