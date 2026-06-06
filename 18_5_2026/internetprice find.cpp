#include<stdio.h>
#include<conio.h>
int main()
{
	int internet,internet_need,ans;
	printf("Enter 1GB Rs \n"); //10
	scanf("%d",&internet);
	printf("Enter GB you need \n"); //5
	scanf("%d",&internet_need);
	ans=internet_need*internet; //10*5
	printf("%d %d %d",internet,internet_need,ans);
}