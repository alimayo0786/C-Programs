#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	printf("Enter your age \n");
	scanf("%d",&age);
	if(age>=13 && age<=19)
	printf("Teenager");
	else
	printf("You are not Teenager");
}