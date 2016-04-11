#include<stdio.h>
struct employee {
 char name[10];
 float salary;
}e;

int main(int argc,char* argv[]){
 printf("Enter your name: ");
 fgets(e.name,9,stdin);
 printf("\nEnter your salary");
 fscanf(stdin,"%f",&(e.salary));
 printf("\n Name: %s\nSalary: %f",e.name,e.salary);
 return 0;
}
