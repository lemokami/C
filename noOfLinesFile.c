#include <stdio.h>

/*This program will read from pBrook.txt and return the no of lines in it */

int main()
{
    FILE *pfile;
    char c; //to store the individual character
    int noOfLines = 1; //since the last line does not contain '\n' noOfLines is initialised as 1 (it can change so do change if the custom file have a \n at last)

    pfile = fopen("texts/pBrook.txt","r"); //opening the file

    if(pfile == NULL) //checking if file can be accessed 
    {
        perror("File can't be accessed");
        return(-1);
    }

    
    while((c = fgetc(pfile)) != EOF) //reading each values
    {
        if (c == '\n') //checking for new line so we can make sure there is a line
        {
            noOfLines++;
        }
    }

    printf("NO OF LINES IN  THE FILE: %d \n",noOfLines); //prints the no of lines
    return 0;
}

/*

Note: if a file is written using fgets() each line would have a \n character at the end so initialise noOfLines to 0 if you use that file instead
 */