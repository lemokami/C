#include <stdio.h>

/*This program will take a number and returns its half.It uses only one variable to do the program */

int half(float *num){ //uses pass by reference method
    *num/=2;
}

void main(){
    float numb;
    printf("Enter a number:");
    scanf("%f",&numb);
    half(&numb);//address of number passed to the half function 
    printf("Half is: %.1f\n",numb);//number was modified in the function

    }

/*This code was made to study about the pass by reference method in c */