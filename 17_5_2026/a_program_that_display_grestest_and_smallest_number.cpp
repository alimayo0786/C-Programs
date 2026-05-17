#include<stdio.h>
#include<conio.h>
int main()
{
	int number1 , number2 , number3 , number4;
	printf("Enter number1 \n");
	scanf("%d",&number1);
	printf("Enter number2 \n");
	scanf("%d",&number2);
	printf("Enter number3 \n");
	scanf("%d",&number3);
	printf("Enter number4 \n");
	scanf("%d",&number4);
	if(number1>number2 && number1>number3 && number1>number4)
	printf("number1 is the greatest number \n");
	else if(number2>number1 && number2>number3 && number2>number4)
	printf("number2 is the greatest number \n");
	else if(number3>number1 && number3>number2 && number3>number4)
	printf("number3 is the greatest number \n");
	else 
	printf("number4 is the greatest number \n");
    {  
	int number1 , number2 , number3 , number4;
	printf("Enter number1 \n");
	scanf("%d",&number1);
	printf("Enter number2 \n");
	scanf("%d",&number2);
	printf("Enter number3 \n");
	scanf("%d",&number3);
	printf("Enter number4 \n");
	scanf("%d",&number4);
	if(number1<number2 && number1<number3 && number1<number4)
	printf("number1 is the smallest number");
	else if(number2<number1 && number2<number3 && number2<number4)
	printf("number2 is the smallest number");
	else if(number3<number1 && number3<number2 && number3<number4)
	printf("number3 is the smallest number");
	else 
	printf("number4 is the smallest number");
	}
}