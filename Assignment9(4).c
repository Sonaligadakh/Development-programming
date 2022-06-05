//Accept N Numbers from user and return frequency of 11 form it.


//Input:6
//		Elements:85	66	3	80	93	88
//Output:

//Input:6
//		Elements:85	11	3	15	11	88
//Output:2


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
	int iCnt=0;
	int iFrequency=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==11)
		{
			iFrequency++;
		}
		
	}
	return iFrequency;
	
}

int main()
{
	int iSize=0;
	int iCnt=0;
	int iRet=0;
	int *ptr=NULL;
	
	printf("Enter number of elements : ");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter elements in array: ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Frequency(ptr,iSize);
	
	printf("Frquency of 11 is: %d",iRet);

	return 0;
}

/*

Frquency of 11 is: 0
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number of elements : 6
Enter elements in array: 85
66
3
15
93
88
Frquency of 11 is: 0
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number of elements : 6
Enter elements in array: 85
11
3
15
11
111
Frquency of 11 is: 2

*/