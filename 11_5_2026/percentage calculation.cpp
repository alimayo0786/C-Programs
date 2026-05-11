

#include<stdio.h>
#include<conio.h>
int main()
{
	float obtained,total,ans;
	printf("Enter 1st number\n");
	scanf("%f",&obtained);
	printf("Enter 2nd number\n");
	scanf("%f",&total);
	ans=(obtained/total)*100;
	printf("%f %f %f",obtained,total,ans);
}