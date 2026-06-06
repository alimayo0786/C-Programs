#include<stdio.h>
#include<conio.h>
int main()
{
	int number;
	printf("Enter a number \n"); //60
	scanf("%d",&number);
	if(number>=50 && number<=100) //60>=50 && 60<=100 
	 printf("Your number lies between 50 and 100 "); //ya true ha or ya wali statement print ho gi
	else
	 printf("Your number does not lies between 50 and 100");
}