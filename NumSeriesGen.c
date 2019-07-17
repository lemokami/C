#include <stdio.h>
/* This program will generate a series based on user's input.

 The inputs are:
     1.lowerlimit
     2.upperlimit
     3.stepping number
 The result:
     llimit,llimit+step,llimit+step+step,(llim+step*3).....hlim

 Generate your series */

void main(){
    int llim,hlim,step;
    printf("Enter the lower limit:");
    scanf("%d",&llim);
    printf("Enter the upper limit:");
    scanf("%d",&hlim);
    printf("Enter the step:");
    scanf("%d",&step);
    for(;llim<=hlim;llim+=step){
        printf("%d\t",llim);
    }
    printf("\n");
}