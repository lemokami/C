#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*This is a basic program which uses a structure to
  read the details of employee which is name,dob and salary and
  stores it as well as prints it 
*/

struct employee{ //employee structure to hold employee data
    char name[50];
    char dob[20];
    int salary;
};


void fgetsCheck(char *parr,int len){ //to check and clear '\n' if it is the end of the charcter(it happens when fgets is used)
    if(*(parr+(len-1))=='\n')
        *(parr+(len-1))='\0';

}
void main()
{
    int salary,leng;
    struct employee emp; //emp of employee structure type
    printf("Enter Employee Name:");
    fgets(emp.name,50,stdin);
    leng=strlen(emp.name); //strlen to check for the end of the string
    fgetsCheck(emp.name,leng);
    printf("Enter his/her dob (dd/mm/yyyy) :");
    fgets(emp.dob,20,stdin);
    leng=strlen(emp.dob);
    fgetsCheck(emp.dob,leng);
    printf("Enter the salary:");
    scanf("%d",&salary);
    emp.salary=salary;
    
    /*Printing the values */
    printf("\n\nNAME:%s\nDOB:%s\nSALARY:%d\n",emp.name,emp.dob,emp.salary);
    }