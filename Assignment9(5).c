//Accept N numbers from user and accept one another number as NO, return frequency of NO in it.

//Input:6
//		No:	66
//		Elements:85	66	3	66	93	88
//Output:2

//Input:6
//		No:12
//		Elements:85	11	3	15	11	11
//Output:0

#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength,int iNo1)
{
	int iCnt=0;
	int iNumCnt=0;
	
	for(int iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo1)
		{
			iNumCnt++;
		}
		
	}
	return iNumCnt;
}




int main()
{
	int iSize=0;
	int iValue1=0;
	int iCnt=0;
	int iRet=0;
	int *ptr=NULL;
	
	printf("Enter number of elements : ");
	scanf("%d",&iSize);
	
	printf("Enter the numbe that you want to count: ");
	scanf("%d",&iValue1);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	
	
	printf("Enter elements in array: ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Frequency(ptr,iSize,iValue1);
	
	printf("Frquency of 11 is: %d",iRet);

	return 0;
}

/*

C:\Users\gsona\Desktop\LB Assignment>gcc Assignment9(5).c -o myexe

C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number of elements : 6
Enter the numbe that you want to count: 66
Enter elements in array: 85
66
3
66
93
88
Frquency of 11 is: 2
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number of elements : 6
Enter the numbe that you want to count: 12
Enter elements in array: 85
11
3
15
11
111
Frquency of 11 is: 0
C:\Users\gsona\Desktop\LB Assignment>

*/