//Write a program which accept number from user and check whether it contains 0 int it or not.


//Input:2395
//Output:There is no zero

//Input:9000
//Output:It contains Zero

//Input:10687
//Output:It contains zero


#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
	int iDigit=0;
	//int rev=0;
	
	while(iNo>0)
	{
		
		if(iNo%10==0)
			{
			return true;
			}
			
			
			
			
	iNo=iNo/10;
	
	
	}
	return false;

	
}

	


   
   
   


int main()
{
	int iValue=0;
	
	int bRet=0;
	printf("Enter number: ");
	scanf("%d",&iValue);
	
	bRet=ChkZero(iValue);
	
	if(bRet==true)
	{
		printf("It contains zero\n");
	}
	else
	{
		printf(" There is no zero  ");
	}
	
	return 0;
}
