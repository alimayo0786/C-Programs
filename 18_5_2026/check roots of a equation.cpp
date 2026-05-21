#include<stdio.h>
#include<conio.h>
int main()
{
	int D,a,b,c;
	printf("Enter the value of a \n"); //2
	scanf("%d",&a);
	printf("Enter  the value of b \n"); //4
	scanf("%d",&b);
	printf("Enter  the value of c \n"); //4
	scanf("%d",&c);
	D=(b*b)-4*(a)*(c); //D=(4*4)-4*(2)*(4)=-16
	if(D>0)   
	 printf("Real root \n");
	else if(D==0)
	 printf("Equal Roots \n");
	else
	 printf("Imaginary roots \n"); // ya wali statement print ho gi
	printf("%d",D);
}