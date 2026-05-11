#include<stdio.h>
#include<conio.h>
int main()
{
	int tatal_choclates,price_of_one_choclate,price_of_total_choclates;
	printf("Enter tatal_choclates\n");
	scanf("%d",&tatal_choclates);
	printf("Enter price_of_one_choclate\n");
	scanf("%d",&price_of_one_choclate);
	printf("Enter price_of_total_choclates\n");
	price_of_total_choclates=tatal_choclates*price_of_one_choclate; //ham na aik choclate ki price ko tatal choclates se multply kr diya ha
	printf("%d",price_of_total_choclates);
}