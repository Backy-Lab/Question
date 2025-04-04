#include<stdio.h>
int main(){
int Num,Plates;
int Sum;


 printf("Welcome to XYZ Hotel\n");
NOM: printf("\n\nMenu : \n1.Samosa 20/-\n2.Dosa 30/-\n3.Tea 10/-\n0.Exit\n");

 printf("\nEnter your Choice :");

 scanf("%i",&Num);

 switch(Num){


case 1 :
     printf("Enter the number of Plates :\n");
     scanf("%i",&Plates);
     Sum= Sum + 20*Plates;
     printf("Sub-Total = %i/-",Sum);
goto NOM;
     return 0;
    break;

case 2 :
     printf("Enter the number of Plates :");
     scanf("%i",&Plates);
     Sum= Sum + 30*Plates;
     printf("Sub-Total = %i/-",Sum);
     goto NOM;
    break;

case 3 :
     printf("Enter the number of Plates :");
     scanf("%i",&Plates);
     Sum= Sum + 10*Plates;
     printf("Sub-Total = %i/-",Sum);
     goto NOM;
    break;

case 0 :
    printf("Grand-Total = %i/- \n",Sum);
    printf("\nT H A N K  Y O U!");
    return 0;
default:
    printf("Invalid Choice!");
return 0;
 }
return 0;
}
