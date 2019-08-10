#include <stdio.h>
#include <stdlib.h>



void parray(int *parr,int ls)
{
    for (int ind = 0;ind<ls;ind++)
    {
        printf("%d\t",*(parr+ind));
    }
    printf("\n");
}


int main()
{
    int *arr,el,max,lst=0;

    printf("Enter the no of elements:");
    scanf("%d",&max);

    arr = (int *) malloc(sizeof(int)*max);
    
    for (int i=0;i<max;i++)
    {
        printf("\nEnter the %dth element for insertion:",i+1);
        fscanf(stdin,"%d",&el);
        *(arr+i)=el;
        printf("INSERTED:");
        lst++;
        parray(arr,lst);
    }

    printf("\n\n----------All Array elements inserted----------\n\n");
    printf("ARRAY::::");
    parray(arr,lst);
    
    free(arr);
    return 0;

}