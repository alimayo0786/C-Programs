#include<stdio.h>
#include<conio.h>
int main()
{
	float r,pi,area_of_a_circle;
	printf("Enter 1st number \n");
	scanf("%f",&r);
	pi=3.14;
	area_of_a_circle=r*r*pi;
	printf("%f %f %f",pi,r,area_of_a_circle);
}