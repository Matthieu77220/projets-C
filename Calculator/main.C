#include <stdio.h>

int main(void){

    float numberA;
    float numberB;
    char op;

    printf("Entrez votre calcule :\n");
    scanf("%f %c %f", &numberA, &op, &numberB);

    switch(op){
        case '+':
            printf("%f%c%f = %f", numberA, op, numberB, numberA+numberB);
        break;
        case '-':
            printf("%f%c%f = %f", numberA, op, numberB, numberA-numberB);
        break;
        case '*':
            printf("%f%c%f = %f", numberA, op, numberB, numberA*numberB);
        break;
        case '/':
            printf("%f%c%f = %f", numberA, op, numberB, numberA/numberB);
        break;
    }

    return(0);
}