
#include<stdio.h>
#include<conio.h>
int main()
{
	float unitprice,total,ans,answer,units,tex;
	unitprice=10.51;
	units=50;
	tex=25.0/100.0;
	ans=units*unitprice;
	answer=ans*tex;
	total=ans+answer;
	printf("%f %f %f %f %f",unitprice,units,ans,answer,total);
} 