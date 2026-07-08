#include<stdio.h>
#include<conio.h>
float find_feets(float inches ){
	float feets;
	feets=inches/12;
	return feets;
}
int main()
{
	float inches , total_feets;
	printf("Enter inches \n");
	scanf("%f",&inches);
	total_feets=find_feets( inches );
	printf("%f",total_feets);
}
	
	