#include<stdio.h>
#include<conio.h>
int main()
{
	int selling_price,cost_price;
	printf("Enter selling price \n");
	scanf("%d",&selling_price);
	printf("Enter cost price \n");
	scanf("%d",&cost_price);
	switch(selling_price>cost_price){
		case 1:{
			printf("Profit \n"); 
			break;
		}
		default :{
			printf("Loss \n"); 
			break;
		}
	}
 
}