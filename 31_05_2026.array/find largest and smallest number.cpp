#include<stdio.h>
#include<conio.h>
int main()
{
	int num[5];
	num[0]=2;
	num[1]=45;
	num[2]=7;
	num[3]=89;
	num[4]=23;
	if(num[0]>num[1] && num[0]>num[2] && num[0]>num[3] && num[0]>num[4])
	 printf("largest number is : %d\n",num[0]);
	else if(num[1]>num[0] && num[1]>num[2] && num[1]>num[3] && num[1]>num[4])
	 printf("largest number is : %d\n",num[1]);
	else if(num[2]>num[0] && num[2]>num[1] && num[2]>num[3] && num[2]>num[4])
	 printf("largest number is : %d\n",num[2]);
	else if(num[3]>num[0] && num[3]>num[2] && num[3]>num[1] && num[3]>num[4])
	 printf("largest number is : %d\n",num[3]);
	else
	printf("largest number is : %d\n",num[4]);  
	{
		if(num[0]<num[1] && num[0]<num[2] && num[0]<num[3] && num[0]<num[4])
		 printf("smallest number is : %d\n",num[0]);
		else if(num[1]<num[0] && num[1]<num[2] && num[1]<num[3] && num[1]<num[4])
		 printf("smallest number is : %d\n",num[1]);
		else if(num[2]<num[0] && num[2]<num[1] && num[2]<num[3] && num[2]<num[4])
		 printf("smallest number is : %d\n",num[2]);
		else if(num[3]<num[0] && num[3]<num[2] && num[3]<num[1] && num[3]<num[4])
		 printf("smallest number is : %d\n",num[3]);
		else
		printf("smallest number is : %d\n",num[4]);
	}
}