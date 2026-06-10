#include<stdio.h>
#include<conio.h>
float percentage(int price , float disount){
	int discount;
	int divided_price;
	divided_price=price/100;
	float total_percentage;
	total_percentage=discount/divided_price;
	return total_percentage;
}
int main()
{
	float price,final_percentage,discounts;
	printf("Enter your price\n");
	scanf("%f",&price);
	printf("Enter your discount\n");
	scanf("%f",&discounts);
	final_percentage=percentage(price , discounts);
	printf("%f",final_percentage);
}