#include<stdio.h>
#include<conio.h>
int main()
{
	int working_hours,extra_hours,overtime_rate,overtime_pay;
	printf("Enter your working hours \n"); //44
	scanf("%d",&working_hours);
	printf("Enter your extra hours \n"); //8
	scanf("%d",&extra_hours);
	printf("Enter overtime rate \n"); //2000
	scanf("%d",&overtime_rate);
	overtime_pay= extra_hours*overtime_rate; //8*2000
	printf("overtime pay \n");
	printf("%d",overtime_pay);
}