#include <stdio.h>
/*This program will print the first line of the text file  */

int main(){
    char str[50];//to store the string that is read by fgets()

    FILE *fp;//making a file pointer

    fp = fopen("texts/pBrook.txt","r");
    
    if(fp==NULL)//checking if file can't be accessed
    {
        perror("Error accessing file");
        return(-1);
    }
    

    if((fgets(str,50,fp))!=NULL)//fgets() stop reading when \n is found or maximum speciefied no-1 is reached (which comes first)
    {
        printf("%s",str);
    }

    fclose(fp);
    
    fp=NULL;
    
    return 0;
}