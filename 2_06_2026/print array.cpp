#include<stdio.h>
#include<conio.h>
int main()
{
	
	int i=0;
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	 
	 
	
	printf("\n----------------------\n");
	for(i = 0; i<10; i++)
	{
		if(i%2==1)
		{
			printf("%d\n",array[i]);
		}	
	}



}