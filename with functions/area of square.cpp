#include<stdio.h>
#include<conio.h>
int area(int side){
	int total_area;
	total_area=side*side;
	return total_area;
}
int main()
{
	
	int side , area_of_square;
	printf("Enter length of side\n");
	scanf("%d",&side);
	area_of_square=area(side);
	printf("%d",area_of_square);
}
	