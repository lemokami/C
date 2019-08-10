#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *arr,pos,max,val;
    
    printf("Enter the no of elements for the array:");
    scanf("%d",&max);

    arr = (int *) malloc(sizeof(int)*max);

    for (int i=0;i<max;i++)
    {
        printf("[%d] = ",i);
        scanf("%d",(arr+i));
    }

    printf("Your Array:::::");
    for (int i=0;i<max;i++)
    {
        printf("\t[%d]:%d",i,*(arr+i));
    }

    printf("\n\nEnter the element position for updation:");
    scanf("%d",&pos);

    printf("\nEnter the new value for %dth element:",pos);
    scanf("%d",&val);

    *(arr+pos) = val;
    
    printf("\nUpdated Array:");
    for (int i=0;i<max;i++)
    {
        printf("\t[%d]:%d",i,*(arr+i));
    }
    printf("\n\n");
    
    free(arr);
}