#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *arr,i=0,j=0,csize;
    
    printf("Enter the no of elements in the array:");
    scanf("%d",&csize);

    printf("-----Enter %d elements to feed into the array-----\n",csize);
    arr =(int *) calloc(csize,sizeof(int));

    while (i<csize)
    {
        printf("Enter:");
        scanf("%d",&arr[i]);
        i++;
    }
    /* Travesing through the elements and printing it */
    printf("\n----------Traversing----------\n\n");
    while(j<csize){
        printf("%dth element:%d\n",j+1,arr[j]);
        j++;
    }
    printf("\n");
}