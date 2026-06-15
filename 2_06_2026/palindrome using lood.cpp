#include<stdio.h>
#include<conio.h>
void palindrome_number(int starting_number , int ending_number ){
	int i,end,num,num1,num2,num3,num4;
	for(i=starting_number;i<=ending_number;i++){
	num1=i%100;
	num2=i/100;
	num3=num1%10;
	num4=num1/10; 
	if(num2==num3)
	 printf("%d palindrome\n",i);
	else
	 printf("%d Not palindrome\n",i);	
	}
}
int main()
{
	int i,end,num,num1,num2,num3,num4;
	printf("Enter 3 digit number \n");
	scanf("%d",&num);
	printf("enter ending number \n");
	scanf("%d",&end);
	palindrome_number( num , end );
}