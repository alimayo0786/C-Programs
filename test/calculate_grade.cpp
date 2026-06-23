#include<stdio.h>
#include<conio.h>
void calculate_grade(int marks){ // yaha pa ham na aik function bnyaa ha or is ma aik variable bna y ha marks ka name se
	printf("\n Result:"); //is line se screen pa result print ho ga
	if(marks>=80){ // ya ha pa marks check kra ga ka wo 8- ya is se ziyada ha
		printf("Grade A\n"); // agr upper wali condition thik ho gi to ya print ho jaya ga
	}  // or agr condition false ho gyi to else if ma jaya ga
	else if(marks>=60 && marks<=79){  // phir ya wali condition chech ho gi ka marks 60 se zihada or 79 se kam ya is ka barabar ha
		printf("Grade B \n"); // agr upper wali condition thik ho gi to ya print ho jaya ga
	}  // or agr condition false ho gyi to phir else if ma jaya ga
	else if(marks>=40 && marks<=59){ // phir ya wali condition chech ho gi ka marks 40 se zihada or 59 se kam ya is ka barabar ha
		printf("Grade C\n");  // agr upper wali condition thik ho gi to ya print ho jaya ga
	} // or agr condition false ho gyi to else ma jaya ga
	else{
		printf("Fail \n"); // or phir ya print ho jaya ga
	} 
} 


int main()
{
	int marks; // yaha pa ham na aik variable bnaya ha marks ka name jis ki data type int ha
	printf("Enter your marks: "); //is line se screen pa ya statement print ho ga
	scanf("%d",&marks); // jo user marks da ga wo is marks ma store ho ga
	calculate_grade( marks ); // ya pa ham na function ko call ki ha
}