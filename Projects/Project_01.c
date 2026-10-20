// GUESS THE NUMBER GAME
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //Initialize random number generator
    srand(time(0));
    //Generate random number between 1 and 100
    int random_number = (rand()%100) + 1;
    int number_of_guess=0;
    int guessed;
    do
    {
        printf("ENTER THE NUMBER :");
        scanf("%d",&guessed);
        number_of_guess++;

        if(guessed>random_number){
            printf("Number is lower\n\n");
        }

        else if(guessed<random_number){
            printf("Number is higher\n\n");
        }

    } while (guessed!=random_number);

    printf("CONGRATS!!! YOU GUESSED THE NUMBER IN : %d\n",number_of_guess);
    return 0;
}