#include <stdio.h>

/*This program will write formatted text to the test3.txt file */

int main(){
    FILE *fp; //file pointer

    fp = fopen("texts/test3.txt","w+"); //opening file 

    fprintf(fp,"%c %s  %d  %s",'I',"have",20,"apples"); //writing formatted file to the file using fprintf()

    fclose(fp); //closing file
    fp=NULL; //clearing file pointer for further use
    
    return 0;
}