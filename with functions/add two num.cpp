//#include<stdio.h>
//#include<conio.h>
//// i.e 2 , 2
//int sum(int num1 , int num2){ // declare sum as a funtion with 2 input int num1 and int num2 
//	int total_sum; // declare totla sum as data type integer
//	total_sum=num1+num2; //2+2
//	return total_sum; //4
//}
//int main()
//{
//	
//	int num1 , num2 , final_sum;
//	printf("Enter 1st number\n");// print enter 1st number
//	scanf("%d",&num1); //2
//	printf("Enter 2nd number\n");// print enter 2nd number
//	scanf("%d",&num2); //4
//	final_sum=sum(num1 , num2); //sum function ha jo call ho ga ( 2 ,2)
//	printf("%d",final_sum); //4
//}

#include <stdio.h>

// Function to calculate Total Marks
int calculateTotal(int marks[], int size) {
    int total = 0;
    for(int i = 0; i < size; i++) {
        total =total+ marks[i];
    }
    return total;
}

// Function to calculate Average Marks
float calculateAverage(int total, int size) {
	
    return(float)total / size;
}

// Function to find the Highest Marks
int findHighest(int marks[], int size) {
    int highest = marks[0];
    for(int i = 1; i < size; i++) {
        if(marks[i] > highest) {
            highest = marks[i];
        }
    }
    return highest;
}

int main() {
    int marks[10]={20,30,40,50,60,70,80,90,10,66};
    int size = 10;
    int totalMarks;
    float averageMarks;
    int highestMarks;


    totalMarks = calculateTotal(marks, size);
    averageMarks = calculateAverage(totalMarks, size);
    highestMarks = findHighest(marks, size);

    // Displaying the results
    printf("\n-----------------------------------\n");
    printf("📊 Execution Results\n");
    printf("-----------------------------------\n");
    printf("Total Marks:   %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);
    printf("Highest Marks: %d\n", highestMarks);
    printf("-----------------------------------\n");

    return 0;
}
	