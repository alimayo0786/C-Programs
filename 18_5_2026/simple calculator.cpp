#include<stdio.h>
#include<conio.h>
int main()
{
//	int symbol,number1,number2;
//	printf("Enter number1 \n"); //2
//	scanf("%d",&number1);
//	printf("Enter number2 \n"); //4
//	scanf("%d",&number2);
//	printf("1-Addition \n");	
//	printf("2-Substraction \n");
//	printf("3-Multiplication \n");	
//	printf("4-Division \n");
//	printf("Enter your operator \n"); //1
//	scanf("%d",&symbol);
//	if(symbol==1) //1==1
//	 printf("%d+%d",number1,number2); //ya true yahi statement print ho gi
//	else if(symbol==2)
//	 printf("%d-%d",number1,number2);
//    else if(symbol==3)
//	 printf("%d*%d",number1,number2);
//	else if(symbol==4)
//	 printf("%d/%d",number1,number2); 
//    else
//    printf("Error");


int num;
printf("Enter any number");
scanf("%d",&num);

switch(num){
	case 1:{
		printf("this is case 1");
		break;
	}
	case 2:{
		printf("this is case 2");
		break;
	
	}
	default:{
		printf("this is else part");
		break;
	}
}    
    
//    int num = 2;
//    if(num==1){
//    	printf("this is case 1");
//	}
//	else if(num == 2)
//	{
//		printf("this is case 2");
//		
//	}
//	else{
//		printf("this is else part");
//	}
    
    
}