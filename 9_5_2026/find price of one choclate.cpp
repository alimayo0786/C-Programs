#include<stdio.h>
#include<conio.h>
int main()
{
	int numbers_of_choclates,price_of_one_choclate,price_of_choclate_box;
	printf("Enter price_of_choclate_box\n");
	scanf("%d",&price_of_choclate_box);
	printf("Enter numbers_of_choclates\n");
	scanf("%d",&numbers_of_choclates);
	printf("Enter price_of_one_choclate\n");
	price_of_one_choclate=price_of_choclate_box/numbers_of_choclates; //ham na choclateka box ki price ko numbers of choclates se divide kr diya ha
	printf("%d",price_of_one_choclate);
}