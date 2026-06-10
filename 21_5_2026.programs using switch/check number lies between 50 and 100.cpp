#include<stdio.h>
#include<conio.h>
int main()
{
	int number;
	printf("Enter a number \n");  //66
	scanf("%d",&number);
	switch(number>=50 && number<=100){ //66>=50 && 66<=100
		case true:{
			printf("Your number lies between 50 and 100 "); //ya true ha or print ho ga
			break;
		}
		default :{
			printf("Your number does not lies between 50 and 100");
			break;
		}
	} 
}