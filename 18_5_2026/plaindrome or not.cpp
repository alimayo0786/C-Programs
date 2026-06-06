#include<stdio.h>
#include<conio.h>
int main()
{
	int num,num1,num2,num3,num4;
	printf("Enter a 3 digit number \n");
	scanf("%d",&num);
	num1=num%100; // 151%100=51
	num2=num/100; //151/100=1
	num3=num1%10; //51%10=1
	num4=num1/10; //51/10=5
	if(num2==num3)
	 printf("palindrome");
	else
	 printf("Not palindrome");
}