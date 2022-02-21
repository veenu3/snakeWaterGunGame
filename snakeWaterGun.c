#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char you, comp,ch;;
    int n,round,globalcompscore=0,globaluserscore=0;
    srand(time(0));
    do{
    round=1;
    int number = rand() % 100 + 1;
    if (number < 33){
        comp = 's';
    }
    else if (number > 33 && number < 66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    printf("Welcome To Snake,Water,Gun Game\n");
    printf("Enter number of rounds: ");
    scanf("%d", &n);
    while(round <= n ){
        int comp_win = 0,user_win=0;
        printf("\nRound%d",round);
        printf("\nSnake -'s'\nWater -'w'\nGun -'g'\n");
        printf("Choose your option:");
        scanf("\n%c", &you);
        if(you!= 's' && you != 'w' && you != 'g'){
          printf("Invalid input, try again\n");
            continue;
        }
        if (comp == 's') {
            if (you == 'w') {
                comp_win = 1;
            }
            else if(you == 'g') {
                user_win = 1;
            }
        }
        else if(comp == 'w') {
            if (you == 'g') {
                comp_win = 1;
            }
            else if (you == 's') {
                user_win = 1;
            }
        }
        else if(comp == 'g') {
            if (you== 's') {
                comp_win = 1;
            }
            else if (you == 'w') {
                user_win = 1;
            }
        }
        if (user_win > comp_win){
            printf("You Won round %d \n",round);
         }
        else if (comp_win > user_win){
            printf("Computer Won round %d \n",round);
         }
        else{
            printf("Draw!!\n");
        }
        printf("You chose %c and computer chose %c.\n ", you,comp);
        globalcompscore+=comp_win;
        globaluserscore+=user_win;
        round += 1;
    }
if (globaluserscore > globalcompscore){
    printf("\nCongratulations!! You Won");
    }
else if (globalcompscore > globaluserscore){
    printf("\nYou lose!!");
    }
else{
    printf("\nMatch Draw!!");
    }
printf("\nDo you want to continue \n");
printf("press :y for 'yes'\n");
printf("press :n for 'no'\n");
scanf(" %c",&ch);
}while (ch=='y');
printf("THNAK YOU!");
return 0;
}

