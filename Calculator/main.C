#include <stdio.h>
#include <stdbool.h>

int main(void){

    float numberA;
    float numberB;
    char op;
    bool run = true;
    char isRunning;
 
    while(run){
       
        printf("Write your calcul :\n");
        scanf("%f %c %f", &numberA, &op, &numberB);

        switch(op){
        case '+':
            printf("%f%c%f = %f\n", numberA, op, numberB, numberA+numberB);
        break;
        case '-':
            printf("%f%c%f = %f\n", numberA, op, numberB, numberA-numberB);
        break;
        case '*':
            printf("%f%c%f = %f\n", numberA, op, numberB, numberA*numberB);
        break;
        case '/':
            if(numberB == 0){
                printf("You can't use 0 here with a division\n");
            } else{printf("%f%c%f = %f\n", numberA, op, numberB, numberA/numberB);
                }
            break;
            }

        printf("write Q to quit pr R to resume (maj+Q or R)\n");
        scanf(" %c", &isRunning);
        if(isRunning == 'Q' ){
            printf("END.");
            run = false;
        }else{
            run = true;
        }
    }
    
    return(0);
}