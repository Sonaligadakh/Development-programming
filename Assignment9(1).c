//Accept N numbers from user and return frequency of even numbers.

//Input:	N:	6
//		Elements:85	66	3	80	93	88
//Output:3



#include<stdio.h>
#include<stdlib.h>


int CountEven(int Arr[],int iLength)
{
	int iCnt=0;
	int EvenCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			EvenCnt++;
		}
		
	}
	return EvenCnt;
	
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
	
	iRet=CountEven(ptr,iSize);
	
	printf("Total even numbers are:%d",iRet);
	
	free(ptr);
	return 0;
}

/*

C:\Users\gsona\Desktop\LB Assignment>gcc Assignment9(1).c -o myexe

C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number of elements: 6
Enter elements in array: 85
66
3
93
80
88
Total even numbers are:3

*/