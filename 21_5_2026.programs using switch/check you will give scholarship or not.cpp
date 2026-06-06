#include<stdio.h>
#include<conio.h>
int main()
{
	float total_marks, marks, age,total_attendence,attendence,percentage;
	printf("Enter your total_marks \n"); 
	scanf("%f",&total_marks);
	printf("Enter your  obtained marks \n"); 
	scanf("%f",&marks);
	printf("Enter your total_attendence \n"); 
	scanf("%f",&total_attendence);
	printf("Enter your attendence \n"); 
	scanf("%f",&attendence);
    percentage=(attendence/total_attendence)*100; 
	printf("%f %f\n %f\n",total_attendence,attendence,percentage);
	switch(marks>75 && attendence>percentage){
		case 1:{
			printf("You will give scholarship");
			break;
		}
		default :{
			printf("You will not give scholarship");
			break;
		}
	}
}