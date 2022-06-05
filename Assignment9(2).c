//Accept N Numbers from user and return difference between frequency of even number and odd numbers.

//Input: 	N:	7
//Elements: 85	66	3	80	93	88	90
//Output: 1(4-3)


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
	int iCnt=0;
	int iEvenCnt=0;
	int iOddCnt=0;
	int Diff=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iEvenCnt++;
		}
		else
		{
			iOddCnt++;
		}
		
		
	}
	//return iEvenCnt,iOddCnt;
	
	
	Diff=iEvenCnt-iOddCnt;
	return Diff;
}


int main()
{
	int iSize=0;
	int iCnt=0;
	int iRet=0;
	int *ptr=NULL;
	
	printf("Enter number of elements: ");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter elements in array: ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Frequency(ptr,iSize);
	printf("Difference is :%d",iRet);
	
	free(ptr);
	return 0;
}

/*
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number of elements: 7
Enter elements in array: 85
66
3
80
93
88
90
Difference is :1
*/