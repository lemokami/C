#include <stdio.h>

/*This program will open the text first and read first three words using fscanf() */

int main(){
    FILE *fp;//file pointer
    
    char str1[20],str2[20],str3[20];//making place to store the three words
    
    fp=fopen("texts/pBrook.txt","r");//opening the file
    
    if(fp==NULL)//checking if file can be accessed
    {
        perror("File can't be accessed");
        return(-1);
    }
    
    fscanf(fp,"%s %s %s",str1,str2,str3); //reading the first three words 
    
    /* -------Printing----------- */    
    printf("First word : %s \n",str1);

    printf("Second word : %s \n",str2);
    
    printf("Third word : %s  \n",str3);
    
    fclose(fp);
    fp = NULL;
    return 0;
}

/*

->fscanf() will stop reading if a whitespace if found like in the case of scanf
->file must be closed after fopen()

 */