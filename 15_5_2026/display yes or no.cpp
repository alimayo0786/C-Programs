#include<stdio.h>
#include<conio.h>
int main()
{
	int number;
	printf("Enter a number \n");
	scanf("%d",&number);
	if(number % 3==0 && number %5==0)
	printf("Yes");
	else
	printf("No");
}