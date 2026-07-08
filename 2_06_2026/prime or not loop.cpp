#include<stdio.h>
#include<conio.h>
void prime_number(int starting_number , int ending_number ){
	int i , j , num , end , check_prime=0;
	for(i=starting_number;i<=ending_number;i++){
		for(j=starting_number;j<=i;j++){
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
int main()
{
	int end , num ;
	printf("Enter a number \n");
	scanf("%d",&num);
	printf("enter ending number \n");
	scanf("%d",&end);
	prime_number( num , end);	
}