#include<stdio.h>
#include<conio.h>
int main()
{
	int length,width,ans;
	printf("Enter 1st number\n");
	scanf("%d",&length);
	printf("Enter 2nd number\n");
	scanf("%d",&width);
	ans=2+(length*width);
	printf("%d %d %d",length,width,ans);
}