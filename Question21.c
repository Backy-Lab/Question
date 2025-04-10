#include <stdio.h>
#include<stdlib.h>
int main (){
int Roll_no;
char Name[20];//This is the correct way to write.
float Phx,Chem,CA,Total,Per;
printf("Enter the Roll number of the student :");
scanf("%i",&Roll_no);
printf("Enter name:");
scanf("%s",&Name);//you have to put 's' when you type String Function!.
printf("Enter the Marks of Subject Physics,Chemistry,Computer Application :");
scanf("%f%f%f",&Phx,&Chem,&CA);
printf("Roll no :%i\n",Roll_no);
printf("Name of the student : %s\n",Name);
printf("Marks of Physics :%.0f\n",Phx);
printf("Marks of Chemistry :%.0f\n",Chem);
printf("Marks of Computer Application :%.0f\n",CA);
Total=Phx+Chem+CA;
printf("Total Marks:%.0f\n",Total);

Per=Total/300*100;
printf("percentage :%.1f%%\n",Per);//if you write "%%" this will add one % at output and if you write one % it will consider as operator.
if(Per>60){
    printf("Division = First\n");
}
else{
    printf("Division =Second\n");
}

return 0;
}
