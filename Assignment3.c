//Accept one number from user and print that number of even numbers on screen.


//Input:7
//Output:2 4 6 8 10 12 14


#include<stdio.h>


int PrintEven(int iNo)
{
	int iCnt=1;
	int iNCnt=1;
	if(iNo<=0)
	{
		iNo=-iNo;
		
	}
	
	
	
	
/*	while(iNCnt<=iNo)
	{
		if(iCnt%2==0)
		{
			iNCnt=iNCnt+1;
			printf("%d\n",iCnt);
		}
		iCnt++;
		
	}
	
	*/
	//     1       2         3
	for(iCnt=1;iNCnt<=iNo;iCnt++)
	{
		if(iCnt%2==0)
		{                                      h
		iNCnt=iNCnt+1;
		printf("%d\n",iCnt);
		}
		 
	}
	
	
}


int main()
{
	int iValue=0;
	//int iRet=0;
	
	printf("Enter number: \n");
	scanf("%d",&iValue);
	PrintEven(iValue);
	//printf("Even numbers are: ",iRet);
	return 0;
}