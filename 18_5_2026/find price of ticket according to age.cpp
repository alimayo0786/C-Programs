#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	printf("Enter your age \n"); //65
	scanf("%d",&age);
	if(age<12) //65<12
	 printf("Ticket price is 70RS"); // ya true nahi ha ya print nahi ho gi
	else if(age<60) //65<60
	 printf("Ticket price is 100RS"); //ya true ha or yahi print ho gi
	else 
	 printf("Ticket price is 150RS");
}