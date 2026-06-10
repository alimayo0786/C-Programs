#include<stdio.h>
#include<conio.h>
int main()
{
	int numbers;
	printf("Enter your numbers \n"); //65
	scanf("%d",&numbers);
	switch(numbers>40){ //65>40
		case true:{
			printf("Student passed all subject"); //ya true ha or print ho gi
			break;
		}
		default :{
			printf("Failed in any subject");
			break;
		}
	} 
}