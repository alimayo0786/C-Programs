#include<stdio.h>
#include<conio.h>
int main()
{
	float discount,total_amount_after_discount,amount_of_discount,total_price_of_shirts;
	printf("Enter total_price_of_shirts \n");
	scanf("%f",&total_price_of_shirts);
	printf("Enter your discount \n");
	scanf("%f",&discount);
	amount_of_discount=(discount*total_price_of_shirts)/100;
	total_amount_after_discount=total_price_of_shirts-amount_of_discount;
	printf("%f %f",amount_of_discount,total_amount_after_discount);	
}