#include<stdio.h>
#include<conio.h>
int main()
{
	int hours,ans;
	printf("Enter 1st number\n");
	scanf("%d",&hours);
	ans=hours*60;
	printf("%d %dminutes",hours,ans);
}