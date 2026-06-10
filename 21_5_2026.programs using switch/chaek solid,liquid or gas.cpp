#include<stdio.h>
#include<conio.h>
int main()
{
	float temp;
	bool eligible,eligible_2,eligible_3;
	printf("Enter your temperature \n"); 
	scanf("%f",&temp); //50

    eligible = temp<=0; // true
    eligible_2 = temp<100; //false
    
	
	switch(eligible){ //true
		case true:{
			 printf("Solid");
			break;
		}
		default:{
			switch(eligible_2){ //false
				case true:{
					printf("Liquid");
					break;
				}
				default:{
					printf("Gas");
					break;
				}
			}
		
		}
   }
}