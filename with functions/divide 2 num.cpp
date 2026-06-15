#include<stdio.h>
#include<conio.h>
int divide(int num1 , int num2){
	int total_divide;
	total_divide=num1/num2;
	return total_divide;
}
int main()
{
	
	int num1 , num2 , divided_num;
	printf("Enter 1st number\n");
	scanf("%d",&num1);
	printf("Enter 2nd number\n");
	scanf("%d",&num2);
	divided_num=divide(num1 , num2);
	printf("%d",divided_num);
}
	