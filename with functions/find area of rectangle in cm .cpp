#include<stdio.h>
#include<conio.h>
// step1-ya area niklna ka  function banao ga data type int
//function ka name area
//input(int length , int width) input ka bad curly braces start {
//is ka bad ham aik or variable bna ga is ka name ham total_area likh lata ha
//is ka bad total_area ko equal kr ka ga area ka 2 vaiables se 
            //i.e total_area=length*width; ya ha na * is liya laga ha kyo ka hama area ka formula aata ha
	//phir ham  return ka aaga wo wal value likha ga jo ham ko print kr wa ni ha
	//curly praces close  }
	
	
	
	
int  area(int length , int width){
	int total_area;
	total_area=length*width;
	return total_area;
}

int  add(int length , int width){
	int total_area;
	total_area=length+width;
	return total_area;
}
int main()
{
	int length,width,final_area;
	printf("Enter 1st number\n");
	scanf("%d",&length);
	printf("Enter 2nd number\n");
	scanf("%d",&width);
	final_area=area(length,width);
	printf("%d\n",final_area);
	printf("%d", add(1,2));
}