#include <stdio.h>
#include <string.h>

struct bio_data{
    char name[50];
    char age[sizeof(int)];
    char hname[70];
    char city[50];
    char state[50];
    char country[50];
};

int main(){
    int len;
    struct bio_data entry;
    printf("Enter your name:");
    fgets(entry.name,50,stdin);
    len=strlen(entry.name);
    if(entry.name[len-1]=='\n')
    {
        entry.name[len-1]='\0';
    }
    
    
    printf("Enter your age:");
    fgets(entry.age,sizeof(int),stdin);
    len=strlen(entry.name);
    if(entry.age[len-1]=='\n')
    {
        entry.age[len-1]='\0';
    }


    printf("Enter your house name:");
    fgets(entry.hname,70,stdin);
    len=strlen(entry.hname);
    if(entry.hname[len-1]=='\n')
    {
        entry.hname[len-1]='\0';
    }
    
    
    printf("Enter the name of your city:");
    fgets(entry.city,50,stdin);
    len=strlen(entry.city);
    if(entry.city[len-1]=='\n')
    {
        entry.city[len-1]='\0';
    }

    
    printf("Enter the name of the state you are residing in:");
    fgets(entry.state,50,stdin);
    len=strlen(entry.state);
    if(entry.state[len-1]=='\n')
    {
        entry.state[len-1]='\0';
    }
    

    printf("Enter the name of the country you are residing in:");
    fgets(entry.country,50,stdin);
    len=strlen(entry.country);
    if(entry.country[len-1]=='\n')
    {
        entry.country[len-1]='\0';
    }
    


    printf("----------DATA ACCESSED FROM STRUCTURE BIO_DATA----------");
    printf("\nYour name:%s",entry.name);
    printf("\nYour age:%s",entry.age);
    printf("\n-----Your ADDRESS-----\n\n%s,\n%s,\n%s,\n%s\n",entry.hname,entry.city,entry.state,entry.country);

    return 0;
}
