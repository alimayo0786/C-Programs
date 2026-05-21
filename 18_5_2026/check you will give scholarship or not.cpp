#include<stdio.h>
#include<conio.h>
int main()
{
	float total_marks, marks, age,total_attendence,attendence,percentage;
	printf("Enter your total_marks \n"); //100
	scanf("%f",&total_marks);
	printf("Enter your  obtained marks \n"); //80
	scanf("%f",&marks);
	printf("Enter your total_attendence \n"); //100
	scanf("%f",&total_attendence);
	printf("Enter your attendence \n"); //95
	scanf("%f",&attendence);
    percentage=(attendence/total_attendence)*100; //95/100*100
	printf("%f %f\n %f\n",total_attendence,attendence,percentage);
	if(marks>75 && attendence>percentage) //80>75 && attendence>90%
	 printf("You will give scholarship"); //ya true ha or yahi print ho gi
	else
	 printf("You will not give scholarship");
}