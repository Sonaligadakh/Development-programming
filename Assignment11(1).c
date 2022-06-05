//Accept number from user and return the largest number.

//Input:	N:	6
//			Elements:85	66	3	66	93	88
//Output:93



#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
	int iCnt=0;
	int iMax=Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iMax<Arr[iCnt])
		{
			iMax=Arr[iCnt];
		}
		
	}
	return iMax;
}




int main()
{
	int iSize=0;
	int iCnt=0;
	int iRet=0;
	int *ptr=NULL;
	
	printf("Enter number of elements: ");
	scanf("%d",&iSize);
	
    ptr =(int*)malloc(iSize*sizeof(int));
	
	printf("Enter elements: ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Maximum(ptr,iSize);
	
	printf("Largest number is: %d",iRet);
	return 0;
}



/*

C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number of elements: 6
Enter elements: 85
66
3
66
93
88
Largest number is: 93


*/