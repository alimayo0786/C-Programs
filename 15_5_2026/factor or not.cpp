#include<stdio.h>
#include<conio.h>
int main()
{
	int number1 , number2;
	printf("Enter number1 \n");
	scanf("%d",&number1);
	printf("Enter number2 \n");
	scanf("%d",&number2);
	if(number2%number1==0)
	printf("number1 is a factor of number2");
	else
	printf("number1 is not a factor of number2");
}