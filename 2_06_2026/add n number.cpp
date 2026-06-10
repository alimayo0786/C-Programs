#include<stdio.h>
#include<conio.h>
int main()
{
	int i,end,num,cp=0;
	printf("Enter a number \n");
	scanf("%d",&num);
	printf("enter ending number \n");
	scanf("%d",&end);
	for(i=num;i<=end;i++){
		
		cp=cp+i;
		 	
	}
		printf("%d",cp);
}