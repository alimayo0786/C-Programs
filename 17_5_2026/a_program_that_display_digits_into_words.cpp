#include<stdio.h>
#include<conio.h>
int main()
{
	int num,num1,num2,num3,num4;
	printf("Enter a 3 digit number \n");
	scanf("%d",&num);
	num1=num%100; // 157%100=57
	num2=num/100; //157/100=1
	num3=num1%10; //57%10=7
	num4=num1/10; //57/10=5
	if(num2==1) //1==1=true
	 printf("One hundred"); // ya true ha or one hundred print ho ga
	else if(num2==2) //1==2=false
	 printf("Two hundred"); // ya true ha or two hundred print ho ga
	else if(num2==3) //1==3=false
	 printf("Three hundred"); // ya true ha or three hundred print ho ga
	else if(num2==4) //1==4=false
   	 printf("Four hundred"); // ya true ha or four hundred print ho ga
	else if(num2==5) //1==5=fasle
	 printf("Five hundred"); // ya true ha or five hundred print ho ga
	else if(num2==6) //1==6=fasle
	 printf("Six hundred"); // ya true ha or six hundred print ho ga
	else if(num2==7) //1==7=fasle
	 printf("Seven hundred"); // ya true ha or seven hundred print ho ga
	else if(num2==8) //1==8=fasle
	 printf("Eight hundred"); // ya true ha or eight hundred print ho ga
	else if(num2==9) //1==9=fasle
	 printf("nine hundred"); // ya true ha or nine hundred print ho ga
  {
	if(num4==1) //5==1=false
	 printf("Ten"); // ya true ha or ten  print ho ga
	else if(num4==2) //5==2=false
	 printf("Twenty"); // ya true ha or twenty  print ho ga
	else if(num4==3) //5==3=false
	 printf("Thirty"); // ya true ha or thirty  print ho ga
	else if(num4==4) //5==4=false
	 printf("Fourty"); // ya true ha or fourty  print ho ga
	else if(num4==5) //5==5=true
	 printf("Fifty"); // ya true ha or fifty  print ho ga
	else if(num4==6) //5==6=false
	 printf("Sixty"); // ya true ha or sixth  print ho ga
	else if(num4==7) //5==7=false
	 printf("Seventy"); // ya true ha or seventy  print ho ga
	else if(num4==8) //5==8=false
	 printf("Eighty");  // ya true ha or eighty  print ho ga
	else if(num4==9) //5==9=false
	 printf("ninety"); // ya true ha or ninty  print ho ga
  }
   {
    if(num2==1) //7==1=false
	 printf("One"); // ya true ha or one  print ho ga
	else if(num2==2) //7==2=false
	 printf("Two"); // ya true ha or two  print ho ga
	else if(num3==3) //7==3=false
	 printf("Three");// ya true ha or t hree print ho ga
	else if(num3==4) //7==4=false
	 printf("Four"); // ya true ha or four  print ho ga
	else if(num3==5) //7==5=false
	 printf("Five"); // ya true ha or five  print ho ga
	else if(num3==6) //7==6=false
	 printf("Six"); // ya true ha or six  print ho ga
	else if(num3==7) //7==7=true
	 printf("Seven"); // ya true ha or seven  print ho ga
	else if(num3==8) //7==8=false
	 printf("Eight"); // ya true ha or eight  print ho ga
	else if(num3==9) //7==9=false
	 printf("nine"); // ya true ha or nine  print ho ga
   }

}