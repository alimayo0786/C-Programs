#include<stdio.h>
#include<conio.h>
int main()
{
	int length,width,area;
	printf("Enter 1st number\n");
	scanf("%d",&length);
	printf("Enter 2nd number\n");
	scanf("%d",&width);
	area=(length*width)*100;
	printf("%dm %dm %dcm",length,width,area);
}