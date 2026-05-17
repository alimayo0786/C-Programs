
#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2;
	printf("Enter 1st number \n");
	scanf("%d",&num1);
	printf("Enter 2nd number \n");
	scanf("%d",&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("%d %d",num1,num2);
}