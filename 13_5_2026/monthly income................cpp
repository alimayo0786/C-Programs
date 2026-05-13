#include<stdio.h>
#include<conio.h>
int main()
{
	int monthly_income,total_monthly_expenses,total_yearly_expenses,monthly_saving,yearly_savings,average_saving_per_month,average_expense_per_month;
	printf("Enter monthly_income \n");
	scanf("%d",& monthly_income);
	printf("Enter total_monthly_expenses \n");
	scanf("%d",& total_monthly_expenses);
	total_yearly_expenses=total_monthly_expenses*12;
	monthly_saving=monthly_income-total_monthly_expenses;
	yearly_savings=monthly_saving*12;
	average_saving_per_month=(monthly_saving*12)/12;
	average_expense_per_month=(total_monthly_expenses*12)/12;
	printf("%d %d %d %d %d %d %d",monthly_income,total_monthly_expenses,monthly_saving,total_yearly_expenses,yearly_savings,average_saving_per_month,average_expense_per_month);	
}