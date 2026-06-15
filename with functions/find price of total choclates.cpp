#include<stdio.h>
#include<conio.h>
int price_of_choclate_box( int total_choclates, int price_one_choclate){
	int total_price;
	total_price=total_choclates * price_one_choclate;
	return total_price;
}
int main()
{
	int total_choclates,price_one_choclate,price_choclate_box;
	printf("Enter total choclates\n");
	scanf("%d",&total_choclates);
	printf("Enter price of one choclate\n");
	scanf("%d",&price_one_choclate);
	printf("Enter price_of_choclate_box\n");
	price_choclate_box=price_of_choclate_box(total_choclates , price_one_choclate); 
	printf("%d",price_choclate_box);
}