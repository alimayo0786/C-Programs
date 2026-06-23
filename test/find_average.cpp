#include<stdio.h>
#include<conio.h>
int find_total(int marks[] ,int size){ // yaha pa ham na aik function bnyaa ha or is ma aik variable bna y ha mum ka name se
	int total=0;
	int i;
	for(i=0 ; i<size ;i++){
		total = total + marks[i] ;
	}
	return total;
} 
float calculate_average( int total, int size){
	float result;
	result=total/size;
	return result;
}
int highest_marks(int marks[],int size){
	int highest;
	int i;
	for(i=0;i<size;i++){
		if(marks[i]>highest){
			highest=marks[i];
		}
	}
	return highest;
}


int main()
{
	int marks[10]={50,70,60,55,76,45,90,30,33,12}; // yaha pa ham na aik variable bnaya ha num ka name jis ki data type int ha
	int size=10;
	int total_marks;
	float average;
	int high_marks;
	total_marks=find_total(marks , size); // ya pa ham na function ko call ki ha
	printf("%d \n",total_marks);
	average=calculate_average(total_marks , size); // ya pa ham na function ko call ki ha
	printf("%f \n",average);
	high_marks=highest_marks(marks , size); // ya pa ham na function ko call ki ha
	printf("%d \n",high_marks);
}