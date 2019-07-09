#include <stdio.h>
/*This progeam takes your name as input and greets(prints) you with "Hello <your_name>"  */
void main(){
    char a[50];
    printf("Enter your name:");
    scanf("%s",&a);
    printf("Hello %s \n",a);
}