#include"header7(1).h"

int CountEven(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	
	auto int iDigit=0;
	auto int iCnt=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		
		if(iNo%2==0)
		{
			iCnt++;
		}
		iNo=iNo/10;
		
	}
	return iCnt;
	
	
}