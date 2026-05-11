
#include<stdio.h>
#include<conio.h>
int main()
{
	int temp,a,b;
	printf("Enter 1st number\n");
	scanf("%d",&temp);
	printf("Enter 2nd number\n");
	scanf("%d",&a);
	printf("Enter 3rd number\n");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d %d %d",temp,a,b);
}