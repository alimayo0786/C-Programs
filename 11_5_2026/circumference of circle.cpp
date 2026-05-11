#include<stdio.h>
#include<conio.h>
int main()
{
	float r,pi,ans;
	printf("Enter 1st number\n");
	scanf("%f",&pi);
	printf("Enter 2nd number\n");
	scanf("%f",&r);
	ans=2*(pi*r);
	printf("%f %f %f",pi,r,ans);
}