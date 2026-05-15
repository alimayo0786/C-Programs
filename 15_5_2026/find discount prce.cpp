#include<stdio.h>
#include<conio.h>
int main()
{
	float bill,discount;
	printf("Enter total bill \n");
	scanf("%f",&bill);
	if(bill>=1000)
	discount=bill*10/100;
	else if(bill>=2500)
	discount=bill*20/100;
	else if(bill>=5000)
	discount=bill*35/100;
	else if(bill>=10000)
	discount=bill*50/100;
	printf("Discount is %f \n",discount);
	printf("Total Bill is %f \n",bill);
	printf("Bill after discount is %f \n",bill-discount);	
}