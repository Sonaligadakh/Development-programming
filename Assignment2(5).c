//Accept number from user and check whether number is even or odd.



#include<stdio.h>
#include<stdbool.h>


bool CheckEven(int iNo)
{
	if(iNo%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	int iValue=0;
	bool bRet;
	
	printf("Enter number: \n");
	scanf("%d",&iValue);
	
	
	bRet=CheckEven(iValue);
     if(bRet==true)
	 {
		 printf("%d is Even number",iValue);
		 
	 }
	 else
	 {
		 printf("%d is odd number",iValue);
	 }
	 
	
	return 0;
}