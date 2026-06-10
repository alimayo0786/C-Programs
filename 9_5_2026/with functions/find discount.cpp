#include<stdio.h>
#include<conio.h>
float discount( int price , float percentage){
	float total_discount;
	total_discount=(price*percentage)/100;
	return total_discount;
}
int main()
{
	float price,percentage,final_discount;
	printf("Enter your price\n");
	scanf("%f",&price);
	printf("Enter your percentage\n");
	scanf("%f",&percentage);
	final_discount=discount(percentage , price);
	printf("%f",final_discount);
}