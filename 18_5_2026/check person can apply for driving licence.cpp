#include<stdio.h>
#include<conio.h>
int main()
{
	int age,test,pass;
	printf("Enter your age \n"); //30
	scanf("%d",&age);
	printf("Enter your eyesight test result \n"); // pass
	scanf("%d",&test);
	if(age>18 && test==pass)   //30>18 && test==pass
	 printf("you can apply for a driving test"); // ya true ha yahi statement print ho gi
	else
	 printf("you can not apply for a driving test");
}