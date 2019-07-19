#include <stdio.h>
void main(){
    enum days {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
    enum days day;
    printf("Enter the name of the day:");
    scanf("%s",&day);
    printf("%d",day);
}