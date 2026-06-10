#include<stdio.h>
#include<conio.h>
int main()
{
	int i,end,num,num1,num2,num3,num4;
	printf("Enter 3 digit number \n");
	scanf("%d",&num);
	printf("enter ending number \n");
	scanf("%d",&end);
	for(i=num;i<=end;i++){
	num1=i%100; // 151%100=51
	num2=i/100; //151/100=1
	num3=num1%10; //51%10=1
	num4=num1/10; //51/10=5
	if(num2==num3)
	 printf("%d palindrome\n",i);
	else
	 printf("%d Not palindrome\n",i);	
	}
}