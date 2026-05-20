#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// THE GUESSING GAME
int main(){
srand(time(NULL));
int max = 100;
int min =1 ;
int tries = 0;
int guess =0 ;
int answer = (rand() % (max - min + 1)) + min;
printf("***NUMBER GUESSING GAME***\n");
do{ printf("enter your guess: ");
scanf("%d", &guess);
    tries ++;
    if(guess < answer){
        printf("too low\n");
    }
    else if(guess > answer){
        printf("too high\n");
    }
    else{
        printf("CORRECT!\n");
    }
}


while(answer != guess);

printf("you have tried: %d times",tries);
    return 0;
}