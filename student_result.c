#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student //making student structure
{
    char name[50];
    int class;
    int science;
    int maths;
    int computer;
};

int main(void){
    int maxstud,class;
    char maxstudstr[sizeof(int)],classstr[sizeof(int)];
    printf("Enter the no of students:");
    fgets(maxstudstr,sizeof(int),stdin);
    maxstud=atoi(maxstudstr);
    struct student stud[maxstud];
    printf("Enter the class name:");
    fgets(classstr,sizeof(int),stdin);
    class=atoi(classstr);

    /*Taking input from the user */
    for(int i=0;i<maxstud;i++)
    {
        printf("Enter the name of the student:");
        scanf("%s",stud[i].name);
        stud[i].class=class;
        printf("Enter the marks in science:");
        scanf("%d",&stud[i].science);
        printf("Enter the marks in maths:");
        scanf("%d",&stud[i].maths);
        printf("Enter the marks in computer:");
        scanf("%d",&stud[i].computer);
        printf("\n\n");
        fflush(NULL);
    }


    /*Printing the details of the students */
    printf("\n\n---------STUDENT DETAILS---------\n\n");
    for(int i=0;i<maxstud;i++)
    {
        printf("NAME:::::%s\n",stud[i].name);
        printf("CLASS:::::%d\n",stud[i].class);
        printf("Marks:\tscience:%d\tmaths:%d\tcomputer:%d",stud[i].science,stud[i].maths,stud[i].computer);
        printf("\n\n");
    }

}

/*
----------STUDENT RESULT VIEWER----------

This program takes input of a student and prints their details using structure in c






 */