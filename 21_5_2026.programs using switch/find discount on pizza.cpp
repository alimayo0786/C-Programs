#include<stdio.h>
#include<conio.h>
int main()
{
    float amount;
	printf("Enter your amount \n"); //6000
	scanf("%f",&amount);
	switch(amount>5000){ //6000>5000
    case true:{
    	printf("You will give 20 percent discount "); //ya true ha or print ho ga
		break;
	}
	default:{
		printf("You will give 10 percent discount");
		break;
	}
}
}