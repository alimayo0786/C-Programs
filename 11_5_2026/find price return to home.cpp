
#include<stdio.h>
#include<conio.h>
int main()
{
	float clothes,home,discount,total,finalprice;
	total=5000;
	clothes=3500;
	discount=7.0/100.0;
	discount=clothes*discount;
	finalprice=clothes-discount;
	home=total-finalprice;
	printf("%f %f %f %f %f",total,clothes,discount,finalprice,home);
}