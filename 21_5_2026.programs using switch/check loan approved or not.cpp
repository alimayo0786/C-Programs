#include<stdio.h>
#include<conio.h>
int main()
{
	int salary,experience;
	printf("Enter ypur salary \n"); //60000
	scanf("%d",&salary);
	printf("Enter your job experience years \n"); //3
	scanf("%d",&experience);
	switch(salary>50000 && experience>=2){
		case 1:{
			printf("loan approved");
			break;
		}
		default :{
			printf("not loan approved");
			break;
		}
	}
}