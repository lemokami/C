#include <stdio.h>

// This program prints the sum of given two numbers using pointers to reference the numbers from sum() function 


int sum(int *n1,int *n2) //used pointer as parameters as address is passed to the function
{
    int sum=*n1+*n2;
    return sum;
}
void main(){
    int num1 ,num2;
    printf("Enter the a no:");
    scanf("%d",&num1);
    printf("Enter another no:");
    scanf("%d",&num2);
    printf("Sum::::::%d\n",sum(&num1,&num2));// address is passed to the function to implement pass by reference
    }