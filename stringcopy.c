#include <stdio.h>

// This program copies a user entered string and using pointers copies it to another string

void stringcopy(char *orginal,char *copy){
    while(*orginal)  //'/0' is considered to be zero(0) so when the end comes the conditon will become false 
        *copy++=*orginal++;
    *copy='\0'; //the loop will not add NULL character[use do while for not using this]
}

int main(void){
    char str1[50];
    char str2[50];
    printf("Enter the string to be copied:");
    fgets(str1,50,stdin);
    stringcopy(str1,str2);
    printf("original string str1:\"%s\"",str1); //prints original string
    printf("duplicated string str2:\"%s\"",str2);//prints the dupicated string
    printf("Check code for more information\n");
    //last line is given if there's is a confusion in the program 
}

/*
P.S:gets has been removed and now we use fgets
syntax:fgets(<name>,<size>,stdin); 
 
 */