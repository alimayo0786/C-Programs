#include<stdio.h>
#include<conio.h>
int week(int days ){
	int total_weeks;
	total_weeks=days/7;
	return total_weeks;
}
int main()
{
	
	int days , days_to_weeks;
	printf("Enter days \n");
	scanf("%d",&days);
	days_to_weeks=week( days);
	printf("%d",days_to_weeks);
}
	