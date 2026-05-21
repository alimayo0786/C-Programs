#include<stdio.h>
#include<conio.h>
int main()
{
	float total_marks, marks, age, percentage;
	printf("Enter your total_marks \n");  //1000
	scanf("%f",&total_marks);
	printf("Enter your  obtained marks \n"); //750
	scanf("%f",&marks);
	printf("Enter your age \n"); //23
	scanf("%f",&age);
    percentage=(marks/total_marks)*100; //800/1000*100
	printf("%f %f\n %f\n",total_marks,marks,percentage);
	if(marks>percentage && age<25) //agr marks 70% se ziyadha ha to true ha or age 25 se kam ho to
	 printf("Admission eligibility for university");
	else
	 printf("Admission not eligibility for university");
}