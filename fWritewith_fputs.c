#include <stdio.h>
#include <stdlib.h>

/*This program will write custom text to test2 text file  */

int main()
{

    FILE *fp;
    char *text=(char *)malloc(sizeof(char)*100); //synamic memory allocation

    fp = fopen("texts/test2.txt","w+"); //opening the file

    printf("custom text:"); //reading the custom text from the user
    fgets(text,100,stdin);//storing the text in text variable for writing 
  
    fputs(text,fp); //writing the text to the file

    free(text); //freeing dynamically allocated memory
    fclose(fp); //closing the file
    fp=NULL; //clearing the value in file pointer for further use

    return 0;
}

/*

-> fputs() helps to write strings to a file
 
 */