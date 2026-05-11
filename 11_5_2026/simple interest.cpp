
#include<stdio.h>
#include<conio.h>
int main()
{
	int p,r,t,ans;
	printf("Enter 1st number\n");
	scanf("%d",&p);
	printf("Enter 2nd number\n");
	scanf("%d",&r);
	printf("Enter 3rd number\n");
	scanf("%d",&t);
	ans=p*r*t/100;
	printf("%d %d %d %d",p,r,t,ans);
}