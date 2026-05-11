#include<stdio.h>
#include<conio.h>
int main()
{
	float price,discount,discounts,finalprice;
	printf("Enter your price\n");
	scanf("%f",&price);
	printf("Enter your discount\n");
	scanf("%f",&discount);
	discounts=price*discount;
	finalprice=price-discounts;
	printf("%f %f %f %f",price,discount,discounts,finalprice);
}