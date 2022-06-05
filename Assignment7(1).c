//Write a program which accept number from user and return the count of even digits.




//Input:2395
//Output:1

//Input:1018
//Output:2

//Input:-1018
//Output:2

//Input:8462
//Output:4




#include"header7(1).h"



int main()
{
	auto int iValue=0;
	auto int iRet=0;
	
	printf("Enter number: ");
	scanf("%d",&iValue);
	
	iRet=CountEven(iValue);
	
	printf("Total even numbers are:%d",iRet);
	return 0;
}
