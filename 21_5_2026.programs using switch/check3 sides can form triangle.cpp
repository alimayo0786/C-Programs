#include<stdio.h>
#include<conio.h>
int main()
{
	float side1,side2,side3;
	bool eligible,eligible_2,eligible_3,eligible_4;
	printf("Enter side1 \n"); //4
	scanf("%f",&side1);
	printf("Enter side2 \n"); //4
	scanf("%f",&side2);
	printf("Enter side3 \n"); //3
	scanf("%f",&side3);
	eligible =side1==side2 && side1==side3 && side3==side2; // true
    eligible_2 = side1==side2; //true
    eligible_3=side1==side3; //false
    eligible_4=side3==side2;
    	switch(eligible){ //true 
		case true:{
			 printf("Equilateral");//false
			break;
		}
	default:{
		
		switch(eligible_2){ //true
			case true:{
				 printf("Isosceles");
				break;
			}
		default:{
		
		switch(eligible_3){ //false
			case true:{
				 printf("Isosceles");
				break;
			}
			
	default:{		
		switch(eligible_4){ //false
			case true:{
				 printf("Isosceles");
				break;
			}
			default:{ //false
		   		 printf("Scalene");
				break;
			}		
				}
			}
		
		}
	}
}
}
}
}