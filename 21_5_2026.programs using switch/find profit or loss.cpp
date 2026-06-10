#include<stdio.h>
#include<conio.h>
int main()
{
	int selling_price,cost_price;
	printf("Enter selling price \n"); 
	scanf("%d",&selling_price); //400
	printf("Enter cost price \n");
	scanf("%d",&cost_price); //300
	switch(selling_price>cost_price){ //400>300
		case true:{
			printf("Profit \n"); //ya true ha or print ho ga
			break;
		}
		default :{
			printf("Loss \n"); 
			break;
		}
	}
 
}