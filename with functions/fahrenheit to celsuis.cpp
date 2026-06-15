#include<stdio.h>
#include<conio.h>
int celcuis(int fahrenhiet){
	int total_celcuis;
	total_celcuis=(fahrenhiet-32)*5/9;
	return total_celcuis;
}
int main()
{
	
	int fahrenhiet , final_celcuis;
	printf("Enter fahrenhiet\n");
	scanf("%d",&fahrenhiet);
	final_celcuis=celcuis( fahrenhiet);
	printf("%d",final_celcuis);
}
	