#include<stdio.h>
#include<conio.h>
int main()
{
	int balance,withdrawal_amount;
	printf("Enter your balance \n"); //10000
	scanf("%d",&balance);
	printf("Enter your withdrawal_amount \n"); //5000
	scanf("%d",&withdrawal_amount);
	switch(withdrawal_amount%500==0){  //5000%500==0
	case true:{
		printf("Withdrawal Approved"); //ya true ha or print ho ga
		break;
	}
    default :{
    	 printf("Withdrawal not Approved");
		break;
	}
	 
	 }
}