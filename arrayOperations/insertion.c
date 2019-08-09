#include <stdio.h>
#include <stdlib.h>

void parray(int *parr,int ls)
{
    for (int ind = 0;ind<ls;ind++)
    {
        printf("%d\t",*(parr+ind));
    }
    printf("\n\n");
}
int main()
{
    int *arr,el,max,lst=0;

    printf("Enter the no of elements:");
    scanf("%d",&max);

    arr = (int *) malloc(sizeof(int)*max);
    for (int i=0;i<max;i++)
    {
        printf("Enter the %d element to be inserted:",i);
        scanf("%d",&el);
        *(arr+i)=el;
        printf("INSERTED:%d\n\n",el);
        lst++;
        parray(arr,lst);
    }

    printf("----------All Array elements inserted----------\n\n");
    printf("Array:\t");
    parray(arr,lst);
    return 0;

}