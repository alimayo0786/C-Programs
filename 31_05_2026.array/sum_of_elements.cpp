#include<stdio.h>
#include<conio.h>
int main()
{
	
	int one_d_array[5] = {1,2,3,4,5};
	int two_d_array[2][2] = { {1,2}, {3,4} } ;
	int num[2][2]= { {4,3} , {2,1} };
	
	printf("[%d\t %d]\n", two_d_array[0][0], two_d_array[0][1]);
	printf("[%d\t %d]", two_d_array[1][0], two_d_array[1][1]);
	
	
	printf("\n");
	
	printf("[%d\t %d][%d\t %d]", two_d_array[0][0], two_d_array[0][1], two_d_array[1][0], two_d_array[1][1]);

	
	
//	[1  2]
//	[3  4]
	
//	int num[5];
//	int ans;
//	num[0]=10;
//	num[1]=20;
//	num[2]=30;
//	num[3]=40;
//	num[4]=50;
//	ans=num[0]+num[1]+num[2]+num[3]+num[4];
//	printf("%d\n",ans);
}