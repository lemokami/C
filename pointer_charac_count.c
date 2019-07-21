#include <stdio.h>

/*This program counts the no of character in the string */

int strcount(char *string){
    int count=0;
    while(*string){
        *string++;
        count++;
        }
    return count-1;//the code return one extra fix this
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
 */