#include<stdio.h>
#include<conio.h>
int main()
{
	float total_marks, marks, age, percentage;
	printf("Enter your total_marks \n");  
	scanf("%f",&total_marks);//1000
	printf("Enter your  obtained marks \n");
	scanf("%f",&marks);//800
	printf("Enter your age \n"); 
	scanf("%f",&age);//22
    percentage=(marks/total_marks)*100; //80
    printf("%f %f\n %f\n",total_marks,marks,percentage);
    switch(marks>percentage && age<25){
	case true:{
		printf("Admission eligibility for university");//ya print ho gi ya true ha is liya
		break;
	}
	default:{
		printf("Admission not eligibility for university");
		break;
	}
}
}