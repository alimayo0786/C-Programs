#include<stdio.h>
#include<conio.h>
int main()
{
	int num , num1 , choice;
	printf("Enter 1st number \n");
	scanf("%d",&num);
	printf("Enter 2nd number \n");
	scanf("%d",&num1);
	printf("Addition \n");
	printf("Subtraction \n");
	printf("Multiplication \n");
	printf("Division \n");
	printf("Enter your choice \n");
	scanf("%d",&choice);
	if(choice==1)
	printf("%d+%d=%d",num,num1);
	else if(choice==2)
	printf("%d-%d=%d",num,num1);
	else if(choice==3)
	printf("%d*%d=%d",num,num1);
	else
	printf("%d/%d=%d",num,num1);
}