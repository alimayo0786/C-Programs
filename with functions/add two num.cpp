#include<stdio.h>
#include<conio.h>
// i.e 2 , 2
int sum(int num1 , int num2){ // declare sum as a funtion with 2 input int num1 and int num2 
	int total_sum; // declare totla sum as data type integer
	total_sum=num1+num2; //2+2
	return total_sum; //4
}
int main()
{
	
	int num1 , num2 , final_sum;
	printf("Enter 1st number\n");// print enter 1st number
	scanf("%d",&num1); //2
	printf("Enter 2nd number\n");// print enter 2nd number
	scanf("%d",&num2); //4
	final_sum=sum(num1 , num2); //sum function ha jo call ho ga ( 2 ,2)
	printf("%d",final_sum); //4
}
	