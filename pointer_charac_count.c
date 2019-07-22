#include <stdio.h>

/*This program counts the no of character in the string */

int strcount(char *string){
    int count=0;
    while(*string!='\n'){
        *string++;
        count++;
        }
    return count;//the code return one extra fix this
}

int main(void){
    char str[50];
    int cnt;
    printf("Enter the string:");
    fgets(str,50,stdin);
    cnt=strcount(str);
    printf("count:%d\n",cnt);
}

/*This program has an issue:

    *count is one more than the expected value
    *this may be because of fgets
Analysis os the issue:
    *The problem is found to be with fgets()
    *fgets only stops reading only after a \n is entered
    *So,\n is stored before '\0' which is an extra character which means count will be extra
  Solution:
    *Add -1 to the resultant and display it to the user
        --------------------OR--------------------
    *stop the loop of counting character when the character is \n (prefered)    
 
 */