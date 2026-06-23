#include<stdio.h>
#include<conio.h>
int find_largest(int num1 , int num2 , int num3){ // yaha pa ham na aik function bnyaa ha or is ma 3 variable bna y ha
	if(num1>num2 && num1>num3){
		printf("num1 is largest number : ");
		return num1;
	}
	else if(num2>num1 && num2>num3){
		printf("num2 is largest number : ");
		return num2;
	}
	else{
		printf("num3 is largest number : ");
		return num3;
	}
	
}

int main()
{
	int num1 , num2 , num3 , result; 
	printf("Enter number 1 : ");
	scanf("%d",&num1);
	printf("Enter number 2 : ");
	scanf("%d",&num2);
	printf("Enter number 3 : ");
	scanf("%d",&num3);
	result=find_largest( num1 , num2 , num3); // ya pa ham na function ko call ki ha
	printf("%d \n",result);
	
}