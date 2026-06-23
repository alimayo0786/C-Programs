#include<stdio.h>
#include<conio.h>
void count_even_odd(int number[] ){ // yaha pa ham na aik function bnyaa ha or is ma 1 variable bna y ha
	int i;
	int even_count=0;
	int odd_count=0;
	for(i=0;i<5;i++){
		if(number[i]%2==0){
			even_count++;
		}
		else{
			odd_count++;
		}
	}
	
}

int main()
{
	int number[5]={2,3,4,5,6};   
	count_even_odd( number );                    
}