#include<stdio.h>
#include<conio.h>
int main()
{
	int age,test,pass;
	printf("Enter your age \n"); 
	scanf("%d",&age);
	printf("Enter your eyesight test result \n"); 
	scanf("%d",&test);
	switch(age>18 && test==pass){
		case 1:{
			printf("you can apply for a driving test");
			break;
		}
		default :{
			printf("you can not apply for a driving test");
			break;
		}
	}  
}