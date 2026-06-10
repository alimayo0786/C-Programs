#include<stdio.h>
#include<conio.h>
int main()
{
	
	int num ;
	int start ;
	int end ;
	int i;
	printf("enter any number \n");
	scanf("%d",&num);
	printf("enter starting number \n");
	scanf("%d",&start);
	printf("enter ending number \n");
	scanf("%d",&end);
	for(i=start;i<=end;i++){
		printf("%d*%d=%d\n",num,i,num*i);
		
	}


}