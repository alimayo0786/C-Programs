
#include<stdio.h>
#include<conio.h>
int main()
{
	float unitprice,units,billwithtex,removetex,rupees,tex;
	unitprice=10.51;
	rupees=656.875;
	tex=25.0/100.0;
	billwithtex=rupees*tex;
	removetex=rupees-billwithtex;
	units=removetex/unitprice;
	printf("%f %f %f %f %f",unitprice,rupees,billwithtex,removetex,units);
} 