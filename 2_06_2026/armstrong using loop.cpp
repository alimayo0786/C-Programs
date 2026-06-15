#include<stdio.h>
#include<conio.h>
void armstrong_number(int starting_number , int ending_number ) // yaha function declar howa h or function kush b return ni kary ga i.e armstrong_number(100, 999)
{
	int start, i , end , ans; // start, i , end ans variables ko declare kiaya
	int num1, num2, num3, num4; // int number1, num2. num3, um4 ko declare kiya
	for(i=starting_number;i<=ending_number;i++) // loop lagai jo i=100 say start hoi or condition check ki 100<=999 or 100++
	{
		num1=i%100; //      100%100 = 0
		num2=i/100;  //    100/100 = 1
		num3=num1%10; //   0%10 = 0
		num4=num1/10; //   0/10 = 0
		ans=(num2*num2*num2)+(num4*num4*num4)+(num3*num3*num3); // 1*1*1  +   0*0*0  + 0*0*0   = 1
		if(ans==i) // 1==100
		{
		 	printf(" Armstrong number\n");
		}
		else
		{
			printf("Not armstrong number\n");
		}
	}
}

int main()
{
	int end,start; // yaha ma nay end or start variable declare kiyaye h ji ki abi tak koi value ni h
	printf("Enter a 3 digit number \n"); // yaha system enter 3 digit number line print kary ga
	scanf("%d",&start); // user start ki value enter kary ga or start variable may save ho ga, i.e 100
	printf("enter ending number \n"); // yaya system enter ending number line print kary ga
	scanf("%d",&end); // user end value enter kary ga or system end value ko end variable may save kary ga, i.e 999
	armstrong_number( start , end); // system function ko call kary ga or start or end value pass kary ga i.e armstrong_number(100, 999)
}