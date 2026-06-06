#include<stdio.h>
#include<conio.h>
int main()
{
	float temp;
	printf("Enter your temperature \n"); 75
	scanf("%f",&temp);
	if(temp<=0)  //75<=0
	 printf("Solid"); //ya true ha or solid print ho ga
	else if(temp<100) 
	 printf("Liguid");
	else 
	 printf("Gas");
}