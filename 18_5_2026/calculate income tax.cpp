#include<stdio.h>
#include<conio.h>
int main()
{
	int salary;
	printf("Enter your salary \n"); //40000
	scanf("%d",&salary);
	if(salary<50000)  // 40000<50000 agr salary 50000 se kam ha to koi tax nahi ho ga 
	 printf("No tax"); //ya true ha or no tax print ho ga
	else if(salary>50000 && salary<100000) // agr salary 50000 se ziyada or 100000 se kam ho 10 percent discount ho ga
	 printf("10 percent tax");
	else
	 printf("20 percent tax");
}