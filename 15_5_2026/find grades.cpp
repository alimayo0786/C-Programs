#include<stdio.h>
#include<conio.h>
int main()
{
	float percentage;
	printf("Enter your percentage \n");
	scanf("%f",&percentage);
	if(percentage>=80)
	printf("A");
	else if(percentage>=70)
	printf("B");
	else if(percentage>=60)
	printf("C");
	else if(percentage>=50)
	printf("D");
	else
	printf("F");
}