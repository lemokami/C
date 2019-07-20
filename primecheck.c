# include <stdio.h>

/* This program will check if a given number is prime or not using functions */

int checkprime(int num){
    int iter=2;
    if(num==2)
        return 1;
    if(num==1 || num==0)
        return 0;
    while(iter<num){
        if(num%iter==0)
            return 0;//if the number is found to be divisible by the iterable it returns 0 and exits to to the call 
        iter++;
    }
    return 1;
}

int main(void){
    int number;
    printf("----------FIND IF YOUR NUMBER IS PRIME OR NOT----------\n\n");
    printf("Enter the number:");//taking number from the user
    scanf("%d",&number);
    if(checkprime(number))//the fuction returns 1 or 0 so it is true or false 1:True and 2:False
        printf("%d is a prime\n",number);
    else
        printf("%d is not a prime\n",number);
}