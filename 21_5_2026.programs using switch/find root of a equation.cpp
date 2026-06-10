#include<stdio.h>
#include<conio.h>
int main()
{
	int D,a,b,c;
	bool eligible,eligible_2;
	printf("Enter the value of a \n"); //2
	scanf("%d",&a);
	printf("Enter  the value of b \n"); //4
	scanf("%d",&b);
	printf("Enter  the value of c \n"); //4
	scanf("%d",&c);
	D=(b*b)-4*(a)*(c); //D=(4*4)-4*(2)*(4)=-16
	
	eligible = D>0; // false
    eligible_2 = D==0; //false
    
    switch(eligible){ //false 
		case true:{
			 printf("Real root");
			break;
		}
	default:{		
		switch(eligible_2){ //fale
			case true:{
				 printf("Equal Roots");
				break;
			}
			default:{ //true
		   		 printf("Imaginary roots");
				break;
			}		
				}
			}	
		}

}