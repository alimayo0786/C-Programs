#include<stdio.h>
#include<conio.h>
int main()
{
	int age,test,pass;
	printf("Enter your age \n"); //22
	scanf("%d",&age);
	printf("Enter your eyesight test result \n"); //pass
	scanf("%d",&test);
	switch(age>18 && test==pass){ //22>18 && pass=pass
		case true:{
			printf("you can apply for a driving test"); //ya true ha or print ho ga
			break;
		}
		default :{
			printf("you can not apply for a driving test");
			break;
		}
	}  
}