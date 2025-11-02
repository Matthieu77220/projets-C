#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));

    int computerChoice = rand() % 101;

    int userChoice;

    printf("type a number between 0 and 100: \n");
    scanf("%d", userChoice);
    printf("You've choose: %d \n", userChoice);

    if(&computerChoice == &userChoice){
      printf("You've succefuly found the computer number. GG!");
    } else{
      printf("You didn't found the number of the computer. Try again !");
    }

    return(0);
}