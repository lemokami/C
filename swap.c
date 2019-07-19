#include <stdio.h>

// This program will demonstrate what is 'pass by \nalue' and 'pass by reference'

int SwapWithValue(int x,int y)//pass by value
{
    printf("\n----------Pass by value----------\n\n");
    printf("\nValues in main: \t\n first number:%d \t\n second number:%d\n\n",x,y);
    int temp;
    temp=x;
    x=y;
    y=temp;
    /*Funtion can't return two values(unless pointers are used) so printing inside the function */
    printf("The first number is now:%d\n",x);
    printf("The second number is now:%d\n",y);
    /* The numbers are locally swapped(main has the same values for the numbers when the numbers are entered)*/
}

void SwapWithReference(int *x,int *y)//pass by reference
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void main(){

    int num1,num2;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    SwapWithValue(num1,num2);
    printf("\nValues in main now: \t\n first number:%d \t\n second number:%d\n",num1,num2);//numbers is not swapped in main() but swapped in the function
    printf("\n----------Pass by reference----------\n\n");
    printf("\nValues in main: \t\n first number:%d \t\n second number:%d\n\n",num1,num2);
    printf("The first number is now:%d\n",num1);
    printf("The second number is now:%d\n",num2);
    SwapWithReference(&num1,&num2);
    printf("\nValues in main now: \t\n first number:%d \t\n second number:%d\n\n",num1,num2);//now the numbers are swapped in main()    
    return;

}

/*PS:some more code is added so the output is perfect.This program just demonstrates what pass by value and pass by reference is */