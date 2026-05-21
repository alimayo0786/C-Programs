#include<stdio.h>
#include<conio.h>
int main()
{
	int balance,withdrawal_amount;
	printf("Enter your balance \n"); //10000
	scanf("%d",&balance);
	printf("Enter your withdrawal_amount \n"); //5000
	scanf("%d",&withdrawal_amount);
	if(withdrawal_amount%500==0) //5000%500==0
	 printf("Withdrawal Approved");
	else
	 printf("Withdrawal not Approved");
}