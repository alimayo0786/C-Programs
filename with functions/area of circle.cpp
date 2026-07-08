#include<stdio.h>
#include<conio.h>
float area(float radius , float pi){ // declare function with name area, 2 inputs float radius and float pi and it will returns the float
	float total_area; // declare the total area variable with datatype float
	total_area=radius*radius*pi; // radius or pi ki value multiply ho according to formula
	return total_area; // return the ...........
}
int main()
{
	
	float radius , pi , area_of_circle; // declare these variables as data type float
	printf("Enter your radius\n");  // print enter your radius on user screen
	scanf("%f",&radius); // user se value la ga or is ko radius ma store kra ga
	pi=3.14;
	area_of_circle=area(radius , pi); // ans
	printf("%f",area_of_circle); // it will display the ans
}
	