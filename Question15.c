#include<stdio.h>
#include<stdlib.h>
int main (){

char n,a,m;
char s,u,r,o,p,E;
int Year;
printf("Enter the First Name: ");
scanf("%c%c%c",&n,&a,&m);

printf("Enter the last name : ");
scanf("%c%c%c%c%c%c",&s,&u,&r,&o,&p,&E);

printf("Enter the year of the birth: ");
scanf("%i",&Year);

printf("%c%c%c %c%c%c%c%c%c %i",n,a,m,s,u,r,o,p,E,Year);
return 0;
}
