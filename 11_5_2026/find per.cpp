
#include<stdio.h>
#include<conio.h>
int main()
{
	int age,marks;
	float height;
	char name;
	printf("Enter your name\n");
	scanf("%c",&name);
	printf("Enter your age\n");
	scanf("%d",&age);
	printf("Enter your matric marks\n");
	scanf("%d",&marks);
	printf("Enter your height\n");
	scanf("%f",&height);
	printf("name:%c\n age:%d\n marks:%d\n height:%f\n",name,age,marks,height);
}