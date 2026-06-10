#include<stdio.h>
#include<conio.h>
int main()
{
	int i,end,num,num1,num2,num3,num4,ans;
	printf("Enter a 3 digit number \n");
	scanf("%d",&num);
	printf("enter ending number \n");
	scanf("%d",&end);
	for(i=num;i<=end;i++){
	num1=i%100; // 153%100=53
	num2=i/100; //153/100=1
	num3=num1%10; //53%10=3
	num4=num1/10; //53/10=5
	ans=(num2*num2*num2)+(num4*num4*num4)+(num3*num3*num3);
	if(ans==i)
	 printf(" Armstrong number\n");
	else
	 printf("Not armstrong number\n");
	}
}