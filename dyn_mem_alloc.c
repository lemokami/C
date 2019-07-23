#include <stdio.h>
#include <stdlib.h>//for using malloc,calloc and realloc
#include <string.h>//for using string functions

/*This program helps to understand dynamic memmoy allocation */

int main(void){
    char *a,*b;//for dynamic allocation
    char c[25];//for static allocation
    size_t len;
    a=(char *) malloc(50*sizeof(char));//dynamic allocation using malloc
    b=(char *) calloc(50,sizeof(char));//dynamic allocation using calloc
    printf("Enter a first name:");
    fgets(a, 50, stdin); // usage: fgets(pointer to the buffer, size of accepted data, stream of the data)
    /* In order to clear \n from buf */
    len = strlen(a);
    if (len > 0 && a[len-1] == '\n')
        a[len-1] = '\0';

    printf("Enter some quality about you:");
    fgets(b, 50, stdin);
    /* In order to clear \n from buf */
    len = strlen(b);
    if (len > 0 && b[len-1] == '\n')
        b[len-1] = '\0';

    a=(char *) realloc(a,25*sizeof(char));//realloc modifies the given memory area and adds the given memory to it without clearing its old data
    strcat(a," ");//adding space between first name and last name
    printf("Enter your last name:");
    fgets(c, 25, stdin);
    /* In order to clear \n from buf */
    len = strlen(c);
    if (len > 0 && c[len-1] == '\n')
        c[len-1] = '\0';

    strcat(a,c);//concatinating 'a' and 'c' to join them into a
    printf("\n----------THIS PROGRAM USED DYNAMIC MEMORY ALLOCATION----------\n\n");
    printf("Output:\nYou are %s and you are %s\n\n",a,b);
    free(a);//releasing dynamically allocated memory on a
    free(b);//releasing dynamically allocated memory on b
}



/*
--------------------DEFINITIONS--------------------

-> malloc:a function to dynamically allocate memory 
-> calloc:similar to malloc but initialises the allocated memory with 0
-> realloc: reallocates memory for another allocated memory i.e,helps to extend an allocated memory area which needs more size

--------------------ISSUES--------------------

->can't use fgets()
->last words can't take two words as input(used fgets() instead of scanf but not working)
->need some visual tweaks
->using fgets() or re in scanf not taking input
*/
