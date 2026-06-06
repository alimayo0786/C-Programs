#include<stdio.h>
#include<conio.h>
int main()
{
	int numbers;
	printf("Enter your numbers \n"); 
	scanf("%d",&numbers);
	switch(numbers>40){
		case 1:{
			printf("Student passed all subject");
			break;
		}
		default :{
			printf("Failed in any subject");
			break;
		}
	} 
}