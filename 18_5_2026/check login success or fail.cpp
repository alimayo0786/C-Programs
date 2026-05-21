#include<stdio.h>
#include<conio.h>
int main()
{
	char username,password;
	printf("Enter your username \n"); //a
	scanf("%c",&username);
	printf("Enter your password \n");//a
	scanf("%c",&password);
	if(username==password) //a==a
	 printf("login successful"); //ya true ha login successful ho gi
	else
	 printf("login fail");
}