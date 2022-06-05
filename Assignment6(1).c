//program which accept number from user and display its digit in reverse order.

//Input:2395
//Output:5
	//	9
	//	3
   //2
		

//Input:1018
//Output:8
		//1
		//0
		//1

//Input:-1018
//Output:0
		//1
		//0
		//1

//Input:9000
//Output:0
		//0
		//0
		//9


#include<stdio.h>
int DisplayDigit(int iNo)
{
	int iDigit=0;
		int rev=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo>0)
	{
		
		
		iDigit=iNo%10;
		rev=rev*10+iDigit;
		iNo=iNo/10;	
	}
	
	
	return rev;
}

int main()

{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number:");
	scanf("%d",&iValue);
	
	iRet=DisplayDigit(iValue);
	printf("Reverse is %d",iRet);
	return 0;

}