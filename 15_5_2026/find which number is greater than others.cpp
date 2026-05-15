#include<stdio.h>
#include<conio.h>
int main()
{
	int number1 , number2 , number3;
	printf("Enter number1 \n");
	scanf("%d",&number1);
	printf("Enter number2 \n");
	scanf("%d",&number2);
	printf("Enter number3 \n");
	scanf("%d",&number3);
	if(number1>number2 && number1>number3)
	printf("number is the greatest number");
	else if(number2>number1 && number2>number3)
	printf("num1 is the greatest number");
	else
	printf("number3 is the greatest number");
}