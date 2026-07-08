#include<stdio.h>
#include<conio.h>
void add_n_number(int start, int ending_number){
	int i , cp=0,num ,end;
	for(i=start;i<=ending_number;i++){
		cp=cp+i;
		 	
	}
	printf("%d",cp);
}
int main()
{
	int end,num,i;
	printf("Enter a number \n");
	scanf("%d",&num);
	printf("enter ending number \n");
	scanf("%d",&end);
	add_n_number(i , end);
}