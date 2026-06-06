#include<stdio.h>
#include<conio.h>
int main()
{
	int number1 , number2 , number3 , number4 , number5;
	printf("Enter number1 \n"); //4
	scanf("%d",&number1);
	printf("Enter number2 \n");//5
	scanf("%d",&number2);
	printf("Enter number3 \n");//9
	scanf("%d",&number3);
	printf("Enter number4 \n");//2
	scanf("%d",&number4);
	printf("Enter number5 \n");//7
	scanf("%d",&number5);
	if(number1>number2 && number1>number3 && number1>number4 && number1>number5) //4>5 && 4>9 && 4>2 && 4>7
	printf("number1 is the greatest number \n"); // agr number1 baki sub se bada ha to ya print ho ga
	else if(number2>number1 && number2>number3 && number2>number4 &&number2>number5) //5<4 && 5>9 && 5>2 && 5>7 
	printf("number2 is the greatest number \n"); //agr number2 baki sub se bada ha to ya print ho ga
	else if(number3>number1 && number3>number2 && number3>number4 && number3>number5) 9>4 && 9>5 && 9>2 && 9>7 
	printf("number3 is the greatest number \n"); // ya true ho or ya hi print ho ga
	else if(number4>number1 && number4>number2 && number4>number3 && number4>number5) 
	printf("number4 is the greatest number \n");
	else 
	printf("number5 is the greatest number \n");
}