#include<stdio.h>
#include<conio.h>
int main()
{
    float amount;
	printf("Enter your amount \n"); //6000
	scanf("%f",&amount);
	if(amount>5000) //6000>5000 ya true ha to 20% discount mila ga
	 printf("You will give 20 percent discount ");
	else
	 printf("You will give 10 percent discount");
}