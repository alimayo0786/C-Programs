#include<stdio.h>
#include<conio.h>
int main()
{
	char character;
	printf("Enter a character \n"); //100
	scanf("%d",&character);
	if(character>=97 && character<=122) //100>=97 && 100<=122
	 printf("alphabets"); // ya true ha or alphabet print ha ga
	else if(character>=65 && character<=90)
	 printf("alphabets");
	else
	 printf("not a alphabets");


//    char character;    // ya tariqa ha ascii value nikalna ka
//	printf("Enter a character \n");
//	scanf(" %c", &character);
//	printf("%d \n",character);
    
}