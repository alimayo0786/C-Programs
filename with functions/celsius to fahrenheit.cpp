#include<stdio.h>
#include<conio.h>
int fahrenhiet(int celcuis){
	int total_fahrenhiet;
	total_fahrenhiet=(celcuis*9/5)+32;
	return total_fahrenhiet;
}
int main()
{
	
	int celcuis , final_fahrenhiet;
	printf("Enter celcuis\n");
	scanf("%d",&celcuis);
	final_fahrenhiet=fahrenhiet( celcuis);
	printf("%d",final_fahrenhiet);
}
	