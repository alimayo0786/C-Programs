#include<stdio.h>
#include<conio.h>
int main()
{
	int amount,custumer,premium_member;
	printf("Enter your amount \n"); //4000
	scanf("%d",&amount);
	printf("Enter you premium member or not \n"); //premium member
	scanf("%d",&premium_member);
	if(amount>3000 && custumer==premium_member) //4000>3000 && cutumer==preminum member
	 printf("free delivery"); // to fee delivery print ho jaya ga
	else 
	 printf("not free delivery");
}