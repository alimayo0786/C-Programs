#include<stdio.h>
#include<conio.h>
int main()
{
	int marks,age;
	printf("Enter your marks \n"); //85
	scanf("%d",&marks);
	printf("Enter your age \n"); //22
	scanf("%d",&age);
	if(marks>60 && age<25) //85>60 && 22<25
	 printf("Student can take admission"); // ya wali statement print ho gi
	else
	 printf("Student can not take admission");
}