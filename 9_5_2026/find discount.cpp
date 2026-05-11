#include<stdio.h>
#include<conio.h>
int main()
{
	float price,percentage,discount;
	printf("Enter your price\n");
	scanf("%f",&price);
	printf("Enter your percentage\n");
	scanf("%f",&percentage);
	discount=(percentage*price)/100;
	printf("%f %f %f",price,percentage,discount);
}