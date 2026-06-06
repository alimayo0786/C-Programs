#include<stdio.h>
#include<conio.h>
int main()
{
	char input;
	printf("Enter a character \n");
	scanf("%c",&input);
	if(input>='0' && input<='9')
	printf("Digit");
	else
	printf("Not Digit");
}