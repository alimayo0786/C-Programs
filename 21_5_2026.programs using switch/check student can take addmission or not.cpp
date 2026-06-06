#include<stdio.h>
#include<conio.h>
int main()
{
	int marks,age;
	printf("Enter your marks \n"); 
	scanf("%d",&marks);
	printf("Enter your age \n"); 
	scanf("%d",&age);
	switch(marks>60 && age<25){
		case 1:{
			printf("Student can take admission");
			break;
		}
		default :{
			printf("Student can not take admission");
			break;
		}
	}
}