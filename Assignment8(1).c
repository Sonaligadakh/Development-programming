//Accept N numbers from user and return difference between summation of even elements and odd elements.

//Input: 	N:	6
	//		Elements:85	66	3	80	93	88
//Output:53(234-181)


#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[],int iLength)
{
	int iCnt=0;
	
	int iRet1=0;
	int iRet2=0;
	int iSumEven=0;
	int iOddSum=0;
	int iDiff=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		
	if(Arr[iCnt]%2==0)
	{
		iSumEven=iSumEven+Arr[iCnt];
	}
	else
	{
		iOddSum=iOddSum+Arr[iCnt];
	}
	
	}
	
	iDiff=iSumEven-iOddSum;
	return iDiff;
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
	
	printf("Elements in the array: ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Difference(ptr,iSize);
	
	printf("Result is :%d",iRet);
	
	free(ptr);
	
	return 0;
	
}

/*
Enter number of elements: 6
Elements in the array: 85
66
3
80
93
88
Result is :53

*/