#include <stdio.h>
#include <string.h>
#include <ctype.h> //ctype for using isupper or islower function 

int main()
{
    FILE *fp,*wfp; //
    char c,filename[30],path[70]= "texts/";

    printf("Enter the file name:");
    scanf("%s",filename);
    strcat(path,filename);

    fp=fopen(path,"r");
    if(fp == NULL){
        perror("File can't be accessed");
        return (-1);
    }

    wfp = fopen("texts/output.txt","w+");

    while((c = fgetc(fp))!= EOF)
    {
        if (isupper(c))
            c = c+32;
        else if(islower(c))
            c = c-32;
        fputc(c,wfp);
    }
    fclose(fp);
    fclose(wfp);
    fp = NULL;
    wfp = NULL;
    
    printf("The case switched text file is saved in output.txt(in texts folder)\n");

    return 0;


}