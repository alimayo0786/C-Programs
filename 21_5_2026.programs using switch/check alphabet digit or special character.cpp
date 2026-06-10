#include<stdio.h>
#include<conio.h>
int main()
{
	char character;
	bool eligible,eligible_2,eligible_3;
	printf("Enter a character \n"); //100
	scanf("%d",&character);
	
    eligible = character>=97 && character<=122; // true
    eligible_2 = character>=65 && character<=90; //false
    eligible_3=character>=48 && character<=57; //false
    
	
	switch(eligible){ //true 
		case true:{
			 printf("alphabets");//ya print ho ga
			break;
		}
	default:{
		
		switch(eligible_2){ //false
			case true:{
				 printf("ALPHABETS");
				break;
			}
			
	default:{		
		switch(eligible_3){ //false
			case true:{
				 printf("Digits");
				break;
			}
			default:{ //false
		   		 printf("special character");
				break;
			}		
				}
			}
		
		}
	}
}


//    char character;    // ya tariqa ha ascii value nikalna ka
//	printf("Enter a character \n");
//	scanf(" %c", &character);
//	printf("%d \n",character);
    
}