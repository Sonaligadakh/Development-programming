//Accept two numbers from user and display first number in second number of times.

//Input:  12   5
//Output: 12   12   12   12   12



//Input:-2  3
//Output:-2  -2   -2



//Input:-2   0
//Output:




#include<stdio.h>


void Display(int iNo,int frequency)
{
	int i=0;
	for(i=1;i<=frequency;i++)
	{
		printf("%d\n",iNo);
	}
	
}


int main()
{
	int iValue=0;
	int iCnt=0;
	
	printf("Enter number: \n");
	scanf("%d",&iValue);
	
	printf("enter frequency:");
	scanf("%d",&iCnt);
	
	Display(iValue,iCnt);
	return 0;
}