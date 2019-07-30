#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employee{
    char name[50];
    char dob[20];
    int salary;
};


void fgetsCheck(char *parr,int len){
    if(*(parr+(len-1))=='\n')
        *(parr+(len-1))='\0';

}
void main(){
    int salary,leng;
    struct employee emp;
    printf("Enter Employee Name:");
    fgets(emp.name,50,stdin);
    leng=strlen(emp.name);
    fgetsCheck(emp.name,leng);
    printf("Enter his/her dob (dd/mm/yyyy) :");
    fgets(emp.dob,20,stdin);
    leng=strlen(emp.dob);
    fgetsCheck(emp.dob,leng);
    printf("Enter the salary:");
    scanf("%d",&salary);
    emp.salary=salary;
    
    printf("\n\nNAME:%s\nDOB:%s\nSALARY:%d\n",emp.name,emp.dob,emp.salary);
    }