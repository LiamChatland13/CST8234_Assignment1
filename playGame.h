
 int playGame(int balance){
     char nextRound;
     printf("Does this work?\n");
     printf("Would You Like to play again?: y/n\n");
     scanf("%c",&nextRound);
     while(1){
        if(nextRound == 'y'){
            return 1;
        }else if(nextRound == 'n'){
            return 0;
        }else{
            printf("invalid Input please try again...");
        }
     }
 }
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