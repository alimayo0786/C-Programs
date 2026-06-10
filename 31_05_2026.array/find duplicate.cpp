#include<stdio.h>
#include<conio.h>
int main()
{
	int num[6];
	num[0]=20;
	num[1]=400;
	num[2]=30;
	num[3]=20;
	num[4]=40;
	num[5]=10;
	if(num[0]==num[1])
	 printf("duplicate number is :  %d\n",num[1]);
	 else if(num[0]==num[2])
	 printf("duplicate number is :  %d\n",num[2]);
	else if(num[0]==num[3])
	 printf("duplicate number is :  %d\n",num[3]);  
	else if(num[0]==num[4])
	 printf("duplicate number is :  %d\n",num[4]);
	else
	 printf("no duplicate number");
  {
  	if(num[1]==num[2])
	 printf("duplicate number is :  %d\n",num[2]);
	 else if(num[1]==num[3])
	 printf("duplicate number is :  %d\n",num[3]);
	else if(num[1]==num[4])
	 printf("duplicate number is :  %d\n",num[4]);  
	else
	 printf("no duplicate number");
  }
//  {
//  	if(num[2]==num[3])
//	 printf("duplicate number is :  %d\n",num[3]);
//	 else if(num[2]==num[4])
//	 printf("duplicate number is :  %d\n",num[4]);  
//	else
//	 printf("num[2] ma no duplicate number\n");
//  }
//  {
//  	if(num[3]==num[4])
//	 printf("duplicate number is :  %d\n",num[2]);
//	 else if(num[2]==num[4])
//	 printf("duplicate number is :  %d\n",num[3]);  
//	else
//	 printf("num[3] ma no duplicate number\n");
//  }
//  {
//  	if(num[4]==num[5])
//	 printf("duplicate number is :  %d\n",num[5]);  
//	else
//	 printf("num[2] ma no duplicate number");
//  }
}