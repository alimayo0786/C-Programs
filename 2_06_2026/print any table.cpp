#include<stdio.h>
#include<conio.h>
void table(  int table_number,int starting_number , int ending_number){
	int num ;
	int i;
	for(i=starting_number;i<=ending_number;i++){
		printf("%d*%d=%d\n",num,i,num*i);
		
	}
}
int main()
{
	
	int num ;
	int start ;
	int end ;
	printf("enter any number \n");
	scanf("%d",&num);
	printf("enter starting number \n");
	scanf("%d",&start);
	printf("enter ending number \n");
	scanf("%d",&end);
	table(  num ,start, end );


}