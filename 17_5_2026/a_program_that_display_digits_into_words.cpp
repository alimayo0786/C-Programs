#include<stdio.h>
#include<conio.h>
int main()
{
	int num,num1,num2,num3,num4;
	printf("Enter a 3 digit number \n");
	scanf("%d",&num);
	num1=num%100; //57
	num2=num%100; //1
	num3=num1%10; //7
	num4=num1%10; //5
	if(num2==1)
	printf("One hundred");
	else if(num2==2)
	printf("Two hundred");
	else if(num2==3)
	printf("Three hundred");
	else if(num2==4)
	printf("Four hundred");
	else if(num2==5)
	printf("Five hundred");
	else if(num2==6)
	printf("Six hundred");
	else if(num2==7)
	printf("Seven hundred");
	else if(num2==8)
	printf("Eight hundred");
	else if(num2==9)
	printf("nine hundred");
	else if(num4==1)
	printf("Ten");
	else if(num4==2)
	printf("Twenty");
	else if(num4==3)
	printf("Thirty");
	else if(num4==4)
	printf("Fourty");
	else if(num4==5)
	printf("Fifty");
	else if(num4==6)
	printf("Sixty");
	else if(num4==7)
	printf("Seventy");
	else if(num4==8)
	printf("Eighty");
	else if(num4==9)
	printf("ninety");
	else if(num3==1)
	printf("One");
	else if(num2==2)
	printf("Two");
	else if(num3==3)
	printf("Three");
	else if(num3==4)
	printf("Four");
	else if(num3==5)
	printf("Five");
	else if(num3==6)
	printf("Six");
	else if(num3==7)
	printf("Seven");
	else if(num3==8)
	printf("Eight");
	else if(num3==9)
	printf("nine");
	printf("%d %d %d",num2,num4,num3);
}