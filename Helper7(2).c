#include"Header7(2).h"

int CountOdd(int iNo)
{
	auto int iDigit=0;
	register int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit%2!=0)
		{
			
			iCnt++;
		}
		
	iNo=iNo/10;
	}
	return iCnt;
		
}
