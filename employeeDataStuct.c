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
int main()
{
    int salary,leng,n=1,i=0;
    struct employee emp[10]; //emp of employees structure type
    printf("Enter no. of employes details u want to store");
    scanf("%d",&n);
    while(i<n){
      printf("Enter the following details of person %d \n ",i+1);
      printf("Employee Name:");
      fgets(emp[i].name,50,stdin);
      leng=strlen(emp[i].name); //strlen to check for the end of the string
      fgetsCheck(emp[i].name,leng);
      printf("His/her dob (dd/mm/yyyy) :");
      fgets(emp[i].dob,20,stdin);
      leng=strlen(emp[i].dob);
      fgetsCheck(emp[i].dob,leng);
      printf("Salary:");
      scanf("%d",&salary);
      emp[i].salary=salary;
      i++;
    }
    i=0;
    /*Printing the values */
    while(i<n){
      printf("Details of person %d \n",i+1);
      printf("\n\nNAME:%s\nDOB:%s\nSALARY:%d\n",emp[i].name,emp[i].dob,emp[i].salary);
    }
    getch();
    return(0);
   }
