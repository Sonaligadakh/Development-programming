//Accept N numbers from user  and return the smallest number.
//Input:	N:	6
//			Elements:85	66	3	66	93	88
//Output:3

#include<stdio.h>
#include<stdlib.h>

int MinNumber(int Arr[],int iLength)
{
	int iCnt=0;
	int Min=Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Min>Arr[iCnt])
		{
			Min=Arr[iCnt];
		}
	}
	return Min;
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
	
	iRet=MinNumber(ptr,iSize);
	
	printf("Minimum  is : %d\n",iRet);
	free(ptr);
	return 0;
}

/*
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number of elements : 6
Enter elements of array : 85
66
3
66
93
88
Maximum  is : 3
*/