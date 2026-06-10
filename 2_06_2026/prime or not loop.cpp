#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,end,num,check_prime=0;
	printf("Enter a number \n");
	scanf("%d",&num);
	printf("enter ending number \n");
	scanf("%d",&end);
	for(i=num;i<=end;i++){
		for(j=num;j<=i;j++){
			if(i%j==0){
			 	check_prime++;
			}
		}
		if(check_prime==1)
		{
			printf("%d prime number\n",i);
		}
		
		
		else
		{
			printf("%d not prime number\n",i);
		}
			check_prime=0;
	}
}