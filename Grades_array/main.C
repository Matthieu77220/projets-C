#include <stdio.h>

int main(void){

    int nbStudents;
    int nbGrades = 0;
    int i = 0;
    int j = 0;
    int g = 0;
    float grades[30];
    float sum;
    float avg;
    float max = grades[0];
    float min = grades[0];


    printf("How many student(s) do you have ? :\n");
    scanf("%d", &nbStudents);

    if(nbStudents > 30){
        printf("To many students. the max is 100. Retry.\n");
    } else{
        printf("enter %d grades:\n", nbStudents);
    }

    for(nbGrades; nbGrades<nbStudents; nbGrades++){
        printf("Grade %d: ", nbGrades + 1);
        scanf("%f", &grades[nbGrades]);
    }

    for(i; i<nbStudents; i++){
        printf("All grades: %f", grades[i]);
    }
    
    for(j; j<nbStudents; j++){
        sum += grades[j];
    }

    avg = sum / nbGrades;
    
    printf("\nGrades averrage : %f", avg);


    for(g; g<nbStudents; g++){
        if(grades[g] > max)
    }

    return(0);
}