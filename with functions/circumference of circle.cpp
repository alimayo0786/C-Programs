#include<stdio.h>
#include<conio.h>
float circumference(float radius , float pi){
	float total_circumference;
	total_circumference=(radius*pi);
	return total_circumference;
}
int main()
{
	
	float radius , pi , circumference_of_circle;
	printf("Enter your radius\n");
	scanf("%f",&radius);
	pi=3.14;
	circumference_of_circle=circumference(radius , pi);
	printf("%f",circumference_of_circle);
}
	