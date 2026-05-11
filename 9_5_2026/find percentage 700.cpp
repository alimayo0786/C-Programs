#include<stdio.h>
#include<conio.h>
int main()
{
	float price,percentage,price_ko_divide_kya,discount;
	printf("Enter your price\n");
	scanf("%f",&price);
	printf("Enter your discount\n");
	scanf("%f",&discount);
	price_ko_divide_kya=price/100; //yaha pr ham na price ko 100 se divide kya ha
	percentage=discount/price_ko_divide_kya; //yaha ham na discount ko (price_ko_divide_kya) se divide kya ha
	printf("%f %f %f %f",price,discount,price_ko_divide_kya,percentage);
}