#include<stdio.h>
#include<conio.h>
int main()
{
	float percentage;
	printf("Enter your percentage \n");
	scanf("%f",&percentage);
	if(percentage>50)
	printf("Pass");
	else
	printf("Fail");
}