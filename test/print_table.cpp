#include<stdio.h>
#include<conio.h>
void print_table(int num){ // yaha pa ham na aik function bnyaa ha or is ma aik variable bna y ha mum ka name se
	int i;  // ya pa ham i ko aik variable ka tor pa liya ha jis ki data type int li ha ham na
	for(i=1;i<=10;i++){ // ya pa ham na for loop jo 1 se la ka 10 tak chala  
		printf("%d x %d = %d \n",num,i,num*i); // ya statement tab tak print ho gi jab tak program chala ga
	}
} 


int main()
{
	int num; // yaha pa ham na aik variable bnaya ha num ka name jis ki data type int ha
	printf("Enter a number: "); //is line se screen pa ya statement print ho ga
	scanf("%d",&num); // jo user number da ga wo is num ma store ho ga
	print_table( num ); // ya pa ham na function ko call ki ha
}