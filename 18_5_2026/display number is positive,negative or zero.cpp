#include<stdio.h>
#include<conio.h>
int main()
{
	int num1;
	printf("Enter a number \n"); //5
	scanf("%d",&num1);
	if(num1>0) // agr given nuber 0 se bada ho to positive print ho ga
	 printf("number is positive");
	else if(num1<0) // agr given nuber 0 se bada ho to negative print ho ga
	 printf("number is negative");
	else 
	 printf("number is zero");
}