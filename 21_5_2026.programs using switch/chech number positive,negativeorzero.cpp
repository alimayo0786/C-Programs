#include<stdio.h>
#include<conio.h>
int main()
{
	int num1;
	bool eligible,eligible_2,eligible_3;
	printf("Enter a number \n"); //5
	scanf("%d",&num1);

    eligible = num1>0; // true
    eligible_2 = num1<0; //false
    
	
	switch(eligible){ //true
		case true:{
			 printf("number is positive");
			break;
		}
		default:{
			switch(eligible_2){ //false
				case true:{
					printf("number is negative");
					break;
				}
				default:{
					printf("number is zero");
					break;
				}
			}
		
		}
   }
}