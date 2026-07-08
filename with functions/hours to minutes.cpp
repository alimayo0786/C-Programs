#include<stdio.h>
#include<conio.h>
int find_minutes(int hours ){
	int mints;
	mints=hours*60;
	return mints;
}
int main()
{
	
	int hours , minutes;
	printf("Enter hours \n");
	scanf("%d",&hours);
	minutes=find_minutes( hours );
	printf("%d",minutes);
}
	