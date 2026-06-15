#include<stdio.h>
#include<conio.h>
int price_of_one_choclate( int price_of_choclate_box, int numbers_of_choclates){
	int total_price;
	total_price=price_of_choclate_box / numbers_of_choclates;
	return total_price;
}
int main()
{
	int numbers_of_choclates,price_one_choclate,price_of_choclate_box;
	printf("Enter price_of_choclate_box\n");
	scanf("%d",&price_of_choclate_box);
	printf("Enter numbers_of_choclates\n");
	scanf("%d",&numbers_of_choclates);
	printf("Enter price_of_one_choclate\n");
	price_one_choclate=price_of_one_choclate( price_of_choclate_box , numbers_of_choclates ); 
	printf("%d",price_one_choclate);
}