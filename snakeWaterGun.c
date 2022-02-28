#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakeWaterGun(char you, char comp ){
    if (comp == 's') {
            if (you == 'w') {
                return -1;
            }
            else if(you == 'g') {
                return  1;
            }
        }
        else if(comp == 'w') {
            if (you == 'g') {
                return -1;
            }
            else if (you == 's') {
                return 1;
            }
        }
        else if(comp == 'g') {
            if (you== 's') {
                return -1;
            }
            else if (you == 'w') {
                return 1;
            }
        }
 }
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
        int result = snakeWaterGun(you, comp);
        if (result == 1){
            printf("You Won round %d \n",round);
         }
        else if (result == -1){
            printf("Computer Won round %d \n",round);
         }
        else{
            printf("Draw!!\n");
        }
        printf("You chose %c and computer chose %c.\n ", you,comp);
        globalcompscore+=result== -1;
        globaluserscore+=result == 1;
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

