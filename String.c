#include<stdio.h>
int main(){

char name[30],ender[10],contact[20],reg[20];
printf("Enter name of Student\n");
fgets(name,sizeof(name),stdin);
printf("Enter contact number of Student\n");
fgets(contact,sizeof(contact),stdin);

printf("Enter registration number\n");
fgets(reg,sizeof(reg),stdin);

printf("Enter gender of student\n");
fgets(ender,sizeof(ender),stdin);

printf("The name of student is\n");
puts(name);
printf("The contact of the student is\n");
puts(contact);
printf("The gender of the student is\n");
puts(ender);
printf("The registration number of student is\n");
puts(reg);


}
