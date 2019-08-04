#include <stdio.h>

/*This program reads from a file and prints the file in the shell character by charater (since fgetc()is used) */

int main(){
    FILE *fp;//pointer to store link to the file
    char c;
    
    fp=fopen("texts/tfile.txt","r");//opens and stores the file 
    
    if(fp==NULL)//to check if the file is accessed or not
    {
        perror("Error accessing file");
        return(-1);
    }
    while((c=fgetc(fp))!=EOF)//reading character-by-character
    {
        printf("%c",c);

    }

    printf("\n\n");//for style
    
    fclose(fp);//file opened should be closed like dynamically allocated memory
    
    fp=NULL;//changing value in FILE pointer for further assigning and stuff
    
    return(0);
}