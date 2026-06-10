#include<stdio.h>
#include<conio.h>
int main()
{
	int i,end,start,ans;
	printf("Enter a number \n");
	scanf("%d",&start);
	printf("enter ending number \n");
	scanf("%d",&end);
	for(i=start;i<=end;i++){	
		printf("%d+%d=%d\n",i,i,i+i);
	}
}