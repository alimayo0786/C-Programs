#include<stdio.h>
#include<conio.h>
int average(int num1 , int num2 , int num3){
	int average_three_number;
	average_three_number=(num1*num2*num3)/3;
	return average_three_number;
}
int main()
{
	
	int num1 , num2 , num3, average_of_three_number;
	printf("Enter 1st number\n");
	scanf("%d",&num1);
	printf("Enter 2nd number\n");
	scanf("%d",&num2);
	printf("Enter 3rd number\n");
	scanf("%d",&num3);
	average_of_three_number=average( num1 , num2 , num3);
	printf("%d",average_of_three_number);
}
	