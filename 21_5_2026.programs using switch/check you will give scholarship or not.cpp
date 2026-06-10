#include<stdio.h>
#include<conio.h>
int main()
{
	float total_marks, marks, age,total_attendence,attendence,percentage;
	printf("Enter your total_marks \n"); 
	scanf("%f",&total_marks); //100
	printf("Enter your  obtained marks \n"); 
	scanf("%f",&marks); //80
	printf("Enter your total_attendence \n"); 
	scanf("%f",&total_attendence); //100
	printf("Enter your attendence \n"); 
	scanf("%f",&attendence); //95
    percentage=(attendence/total_attendence)*100; //95
	printf("%f %f\n %f\n",total_attendence,attendence,percentage);
	switch(marks>75 && percentage>90){ //80>75 && 95>90
		case true:{
			printf("You will give scholarship"); //ya true ha or print ho ga
			break;
		}
		default :{
			printf("You will not give scholarship");
			break;
		}
	}
}