#include<stdio.h>
#include<conio.h>
int main()
{
	int salary,experience;
	printf("Enter your salary \n"); //60000
	scanf("%d",&salary);
	printf("Enter your job experience years \n"); //3
	scanf("%d",&experience);
	switch(salary>50000 && experience>=2){ //60000>50000 && 3>=2
		case true:{
			printf("loan approved"); //ya true ha to ya hi print ho gi
			break;
		}
		default :{
			printf("not loan approved");
			break;
		}
	}
}