//Write a program which accepts number from user and return the count of odd digits.

//Input:2395
//Output:3

//Input:1018
//Output:2

//Input:-1018
//Output:2


//Input:8462
//Output:0



#include"Header7(2).h"

int main()
{
	auto int iValue=0;
	auto int iRet=0;
	
	printf("Enter number: ");
	scanf("%d",&iValue);
	
	iRet=CountOdd(iValue);
	
	printf("Total Odd numbers are: %d",iRet);
	return 0;
}



