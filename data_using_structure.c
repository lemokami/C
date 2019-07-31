#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bio_data{
    char name[50];
    int age;
    char hname[70];
    char city[50];
    char state[50];
    char country[50];
};

void fgetsCheck(char *parr,int len){ //to check and clear '\n' if it is the end of the charcter(it happens when fgets is used)
    if(*(parr+(len-1))=='\n')
        *(parr+(len-1))='\0';

}

int main(){
    int len;
    char tage[sizeof(int)];//tage for temporarly storing value of age 
    struct bio_data entry;
    printf("Enter your name:");
    fgets(entry.name,50,stdin);
    len=strlen(entry.name);
    fgetsCheck(entry.name,len);
    
    
    printf("Enter your age:");
    fgets(tage,sizeof(int),stdin);
    len=strlen(tage);
    fgetsCheck(tage,len);
    entry.age=atoi(tage);//coverts character string tage to integer and stores it to entry.age


    printf("Enter your house name:");
    fgets(entry.hname,70,stdin);
    len=strlen(entry.hname);
    fgetsCheck(entry.hname,len);
    
    
    printf("Enter the name of your city:");
    fgets(entry.city,50,stdin);
    len=strlen(entry.city);
    fgetsCheck(entry.city,len);

    
    printf("Enter the name of the state you are residing in:");
    fgets(entry.state,50,stdin);
    len=strlen(entry.state);
    fgetsCheck(entry.state,len);
    

    printf("Enter the name of the country you are residing in:");
    fgets(entry.country,50,stdin);
    len=strlen(entry.country);
    fgetsCheck(entry.country,len);
    


    printf("----------DATA ACCESSED FROM STRUCTURE BIO_DATA----------");
    printf("\nYour name:%s",entry.name);
    printf("\nYour age:%d",entry.age);
    printf("\n-----Your ADDRESS-----\n\n%s,\n%s,\n%s,\n%s\n",entry.hname,entry.city,entry.state,entry.country);

    return 0;
}
