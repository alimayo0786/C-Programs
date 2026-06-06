#include<stdio.h>
#include<conio.h>
int main()
{
	int number;
	printf("Enter a number \n"); 
	scanf("%d",&number);
	switch(number>=50 && number<=100){
		case 1:{
			printf("Your number lies between 50 and 100 "); 
			break;
		}
		default :{
			printf("Your number does not lies between 50 and 100");
			break;
		}
	} 
}