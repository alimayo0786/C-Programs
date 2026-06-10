#include<stdio.h>
#include<conio.h>
int main()
{
	int marks,age;
	printf("Enter your marks \n"); //65
	scanf("%d",&marks);
	printf("Enter your age \n"); //22
	scanf("%d",&age);
	switch(marks>40 && age<25){ //65>40 && 22<25
		case true:{
			printf("Student can take admission"); //ya true ha or print ho ga
			break;
		}
		default :{
			printf("Student can not take admission");
			break;
		}
	}
}