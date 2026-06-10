#include<stdio.h>
#include<conio.h>
int main()
{
	
	int array_one[2][2] = { {1,7}, {3,9} } ;
	int array_two[2][2]= { {1,10} , {20,50} };
	int array_three[2][2];
	array_three[0][0]=array_one[0][0]*array_two[0][0];
	array_three[0][1]=array_one[0][1]*array_two[0][1];
	array_three[1][0]=array_one[1][0]*array_two[1][0];
	array_three[1][1]=array_one[1][1]*array_two[1][1];
	
	printf("[%d\t %d]\n", array_three[0][0], array_three[0][1]);
	printf("[%d\t %d]", array_three[1][0], array_three[1][1]);
}