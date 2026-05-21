#include<stdio.h>
#include<conio.h>
int main()
{
	int units;
	printf("Enter your units \n"); //120
	scanf("%d",&units);
	if(units<100) //120<100
	 printf("5RS/units"); //ya true nahi ha
	else if(units>100 && units<200) //120>100 && 120<200 
	 printf("8 Rs/unit");//ya true ha yahi print ho gi
	else 
	 printf("10RS/unit");
}