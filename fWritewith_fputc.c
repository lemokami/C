#include <stdio.h>

/*This program will write the capital alphabets to the test.txt file  */

int main(){
    FILE *fp; //file pointer
    fp = fopen("texts/test.txt","w+"); //w+ to read as well as write

    if(fp == NULL) //to check for error
    {
        perror("File can't be accessed");
        return(-1);
    }

    for(int c=65;c<=90;c++) //loop to create ASCII values of capital numbers
    {
        fputc(c,fp); //writing using fputc
    }

    fclose(fp); //closing the file 
    fp = NULL; //making the file pointer NULL for further use

    return 0;
}

/*

->fputc takes two arguments:
    *first one is of int type,so we add value of the corresponding Ascii character to write a character

    * second one is the stream/the file pointer

 */