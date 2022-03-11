
/********************************************************************************
Function:               rollDice()
Purpose:                Generate a random number in between 1-6
Function In Parameters: Void
Return Value:           Returns the Number variable which holds the generated number
********************************************************************************/

int rollDice(void){
    int die;
    die = rand()%7;
    return("%d\n", die);
}
