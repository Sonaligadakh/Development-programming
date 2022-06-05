//Accept N numbers from user  and return the difference between smallest and largest number.

//Input:	N:	6
//			Elements:85	66	3	66	93	88
//Output:90(93-3)


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
	int iCnt=0;
	int Max=Arr[0];
	int Min=Arr[0];
	int Diff=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Max<Arr[iCnt])
		{
			Max=Arr[iCnt];
		}
		
		if(Min>Arr[iCnt])
		{
			Min=Arr[iCnt];
		}
	
		
	}
	Diff=Max-Min;
		return Diff;
}


int main()
{
	int iSize=0;
	int *ptr=NULL;
	int iCnt=0;
	int iRet=0;
	
	printf("Enter number of elements : ");
	scanf("%d",&iSize);
	ptr=(int*)malloc(iSize*sizeof(int));
	
	
	printf("Enter elements of array : ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Difference(ptr,iSize);
	
	printf("Difference  is : %d\n",iRet);
	free(ptr);
	return 0;
}
	/*
	
	:\Users\gsona\Desktop\LB Assignment>myexe
Enter number of elements : 6
Enter elements of array : 85
66
3
66
93
88
Difference  is : 90
*/