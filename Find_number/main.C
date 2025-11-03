#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  srand(time(NULL));

  int computerChoice = rand() % 11;
  int userChoice;

  do{
    printf("type a number between 0 and 10:\n");
    scanf("%d", &userChoice);
    if(userChoice > 10){
      printf("Too high ! choose a number between 0 and 10:\n");
    }else if (userChoice < 0){
      printf("Too low ! choose a number between 0 and 10:\n"); 
    }else{
      printf("You choose: %d\n", userChoice);
    }
  } 
  while(computerChoice!=userChoice);

  printf("You won !");

    return(0);
}