#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char you, comp;
    int n,comp_win =0,user_win =0;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("Snake - Water - Gun\n");
    printf("Snake -'s'\nWater -'w'\nGun -'g'\n");
    printf("Choose your option:");
    scanf("\n%c", &you);
    if (you == comp) {
        comp_win && user_win ==0;
    }
    if (you == 's' && comp == 'g')
    {
        comp_win  +=1;
    }
    else if (you == 'g' && comp == 's')
    {
        user_win +=1;
    }

    if (you == 's' && comp == 'w')
    {
        user_win +=1;
    }
    else if (you == 'w' && comp == 's')
    {
        comp_win +=1;
    }

    if (you == 'g' && comp == 'w')
    {
        comp_win +=1;
    }
    else if (you == 'w' && comp == 'g')
    {
        user_win +=1;
    }

    if (user_win > comp_win){
        printf("You Won round%d \n");
        }
    else if (comp_win > user_win){
        printf("Computer Won round %d \n");
        }
    else{
        printf("Draw!!\n");
        }
    printf("You chose %c and computer chose %c.\n ", you,comp);
return 0;
}

