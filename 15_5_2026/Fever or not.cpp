#include<stdio.h>
#include<conio.h>
int main()
{
	float temperature;
	printf("Enter your temperature \n");
	scanf("%f",&temperature);
	if(temperature>98.6)
	printf("You have fever");
	else
	printf("You don't have fever");
}