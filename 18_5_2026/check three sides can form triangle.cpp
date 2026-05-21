#include<stdio.h>
#include<conio.h>
int main()
{
	float side1,side2,side3;
	printf("Enter side1 \n"); //4
	scanf("%f",&side1);
	printf("Enter side2 \n"); //4
	scanf("%f",&side2);
	printf("Enter side3 \n"); //3
	scanf("%f",&side3);
	if(side1==side2 && side1==side3 && side3==side2) //4==4 && 4==3 && 3==4
	 printf("Equilateral \n"); // ya false ho to ya print nahi h gi
	else if(side1==side2) //4==4
	 printf("Isosceles \n"); //ya true ha ya print ho gi
    else if(side1==side3)
	 printf("Isosceles \n"); 
    else if(side3==side2)
	 printf("Isosceles \n"); 
    else
    printf("Scalene");
}