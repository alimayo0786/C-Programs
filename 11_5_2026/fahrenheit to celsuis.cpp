#include<stdio.h>
#include<conio.h>
int main()
{
	float C,F;
	printf("Enter 1st number\n");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("%f %f",F,C);
}