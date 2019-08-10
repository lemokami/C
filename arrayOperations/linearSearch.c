#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *numarr,key,maxel,index;
    int i=0,j=0,flag=0;
    
    printf("Enter the no of elements:");
    scanf("%d",&maxel);

    numarr =(int *) calloc(maxel,sizeof(int));

    printf("Enter %d elements to feed to the array\n",maxel);

    while (i<maxel)
    {
        printf("Enter:");
        scanf("%d",&numarr[i]);
        i++;
    }


    printf("-----Your Array-----\n");
    while (j<maxel)
    {
        printf("%d\t",numarr[j]);
        j++;
    }
    printf("\n");

    printf("Enter the element to be searched:");
    scanf("%d",&key);

    for (int l=0;l<maxel;l++)
    {
        if(numarr[l] == key)
        {
            flag=1;
            index = l;
            break;
        }
    }

    if(flag == 1)
    {
        printf("Element found,It's in the %dth place\n",index+1);
    }
    else
    {
        printf("Element not found\n");
    }
    free(numarr);
}