#include<stdio.h>
#include<conio.h>
int main()
{
	int selling_price,cost_price;
	printf("Enter selling price \n"); //500
	scanf("%d",&selling_price);
	printf("Enter cost price \n"); //350
	scanf("%d",&cost_price);
	if(selling_price>cost_price) //500>350
	 printf("Profit \n"); //ya true ha or profit print ho ga
	else
	 printf("Loss"); 
}