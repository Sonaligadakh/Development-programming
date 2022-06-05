//Accept N numbers from user and check whether that numbers contains 11 in it or not.

//Input:6
//		Elements:85	66	11	80	93	88
//Output:11 is present

//Input:6
//		Elements:85	66	3	80	93	88
//Output:11 is not present

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==11)
		{
			return true;
			break;
		}
		else
		{
			return false;
		}
		
		
	}
	
}


int main()
{
	int iSize=0;
	int iCnt=0;
	int *ptr=NULL;
	bool bRet=0;
	
	printf("Enter number of elements: ");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter elements in array: ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	bRet=Check(ptr,iSize);
	
	if(bRet==true)
	{
		printf("11 is present");
	}
	else
	{
		printf("11 is not present");
	}
	
	
	
	return 0;
	
}
/*

C:\Users\gsona\Desktop\LB Assignment>gcc Assignment9(3).c  -o myexe

C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number of elements: 6
Enter elements in array: 85
66
11
80
93
88
11 is not present
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number of elements: 6
Enter elements in array: 85
66
3
80
93
88
11 is not present

*/