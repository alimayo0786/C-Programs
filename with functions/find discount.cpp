#include<stdio.h>
#include<conio.h>
// i.e discount(10.2, 2.5)
float discount( int price , float percentage){ // declare function with name discount, 2 inputs int price and float percentage and it will returns the float
	float total_discount; // declare the total discount variable with datatype float
	total_discount=(price*percentage)/100; // calculate the percentage of price ans
	return total_discount; // return the ....
}
int main()
{
	float price,percentage,final_discount; // declare variables with data type float
	printf("Enter your price\n"); // display the enter your price on user screen
	scanf("%f",&price); // get the user input price value and store in float price variable, i.e 2.5
	printf("Enter your percentage\n"); // display the enter your percentage on your screen
	scanf("%f",&percentage); // get the user input percentage value and store in float perentage, i.e 10.2
	final_discount=discount(percentage , price); // ans
	printf("%f",final_discount); // it will display the ......... on user screen
}

//