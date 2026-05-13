#include<stdio.h>
#include<conio.h>
int main()
{
	int basic_salry,rate_per_hour,overtime_salary,overtime_rate,working_hour,overtime_hour,total_salary;
	printf("Enter rate_per_hour \n");
	scanf("%d",&rate_per_hour);
	printf("Enter working_hour \n");
	scanf("%d",&working_hour);
	printf("Enter overtime_rate \n");
	scanf("%d",&overtime_rate);
	printf("Enter overtime_hour \n");
	scanf("%d",&overtime_hour);
	basic_salry=rate_per_hour*working_hour;
	overtime_salary=overtime_rate*overtime_hour;
	total_salary=basic_salry+overtime_salary;
	printf("%d",total_salary);
}