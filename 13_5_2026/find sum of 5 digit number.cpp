#include<stdio.h>
#include<conio.h>
int main()
{
	int num,num1,num2,num3,num4,num5,num6,num7,num8,sum;
	printf("Enter 5 digits number \n");
	scanf("%d",&num);
	num1=num%10000;
	num2=num/10000;
	num3=num1%1000;
	num4=num1/1000;
	num5=num3%100;
	num6=num3/100;
	num7=num5%10;
	num8=num5/10;
	sum=num2+num4+num6+num8+num7;
	printf("%d %d",sum,num7);
}