#include<stdio.h>
#include<conio.h>
int main()
{
	float total_marks, marks, age, percentage;
	printf("Enter your total_marks \n");  
	scanf("%f",&total_marks);
	printf("Enter your  obtained marks \n");
	scanf("%f",&marks);
	printf("Enter your age \n"); 
	scanf("%f",&age);
    percentage=(marks/total_marks)*100; 
    printf("%f %f\n %f\n",total_marks,marks,percentage);
    switch(marks>percentage && age<25){
	case 1:{
		printf("Admission eligibility for university");
		break;
	}
	default:{
		printf("Admission not eligibility for university");
		break;
	}
}
}