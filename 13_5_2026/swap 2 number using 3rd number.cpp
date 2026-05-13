
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,num1,num2;
	printf("Enter 1st number \n");
	scanf("%d",&num);
	printf("Enter 2nd number \n");
	scanf("%d",&num1);
	printf("Enter 3rd number \n");
	scanf("%d",&num2);
	num=num1;
	num1=num2;
	num2=num;
	printf("%d %d %d",num,num1,num2);
}