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
    char grade;
};

char grading(float mark){
    char grad;
    if (mark<90){
        grad='O';
    }
    else if (mark>80)
    {
        grad='A';

    }
    else if (mark>70)
    {
        grad='B';

    }
    else if (mark>60)
    {
        grad='C';

    }
    else if (mark>50)
    {
        grad='D';
    }
    else if (mark>40)
    {
        grad='E';
    }
    else{
        grad='F';
    }
    return grad;
}

int legitMarkChecker(){
    int mark;
    while(1){
        scanf("%d",&mark);
        if(mark<100 && mark>0){
            break;
        }
        else
        {
            printf("-----INVALID INPUT-----\n");
            printf("Enter the mark again:");
        }
        
    }
    return mark;
    }

int main(void){
    int maxstud,class;
    float avgmark;
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
        printf("\n\n");
        printf("-----STUDENT NO:%d-----\n",i+1);
        printf("Student Name:");
        scanf("%s",stud[i].name);
        stud[i].class=class;
        printf("Enter the Marks\n");
        printf("Science:");
        stud[i].science=legitMarkChecker();
        printf("Maths:");
        stud[i].maths=legitMarkChecker();
        printf("Computer:");
        stud[i].computer=legitMarkChecker();
        fflush(NULL);
        avgmark=(stud[i].computer+stud[i].maths+stud[i].science/3);
        stud[i].grade=grading(avgmark);
    }


    /*Printing the details of the students */
    printf("\n\n---------STUDENT DETAILS---------\n\n");
    for(int i=0;i<maxstud;i++)
    {
        printf("NAME:%s\n",stud[i].name);
        printf("CLASS:%d\n",stud[i].class);
        printf("MARKS:::Science:%d\tMaths:%d\tComputer:%d",stud[i].science,stud[i].maths,stud[i].computer);
        printf("\n\n\n");
    }

}

/*
----------STUDENT RESULT VIEWER----------

This program takes input of a student and prints their details using structure in c


->Features to add
1.Auto grading
2.Input testing
3.More(not decided yet)

->ADDITIONS
1.A legit mark fuction is added to check if the input is a mark in the limits of 0 and 100

->ISSUES
1.legitMarkChecker() runs to an infinite loop when input other than a number is entered

 */