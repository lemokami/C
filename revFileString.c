#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    int i=0;
    int last=0;
    char filename[30],path[70]= "texts/";

    printf("Enter the file name:");
    scanf("%s",filename);
    strcat(path,filename);
    
    

    fp = fopen(path,"r");
    if (fp == NULL)
        return -1;

    fseek(fp,0,SEEK_END);
    last=ftell(fp);

    while(i<last)
        {   
            i++;
            fseek(fp,-i,SEEK_END);
            printf("%c",fgetc(fp));
        }
    printf("\n");
    return 0;    
}