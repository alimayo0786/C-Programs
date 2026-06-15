#include<stdio.h>
#include<conio.h>
int find_remindor(int num1 , int num2){
	int total_remindor;
	total_remindor=num1%num2;
	return total_remindor;
}
int main()
{
	
	int num1 , num2 , remindor;
	printf("Enter 1st number\n");
	scanf("%d",&num1);
	printf("Enter 2nd number\n");
	scanf("%d",&num2);
	remindor=find_remindor(num1 , num2);
	printf("%d",remindor);
}
	