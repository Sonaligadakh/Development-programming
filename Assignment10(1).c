//Accept N numbers from user and accept one another number as NO,check whether NO is present or not.


//Input: 	N:	6
//			NO:66
//			Elements:85	66	3	66	93	88
//Output:	TRUE

//Input: 	N:	6
//			NO:12
//			Elements:85	11	3	15	11	111
//Output:	FALSE



#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool Check(int Arr[],int iLength,int iValue1)
{
	int iCnt=0;
	bool bFlag=false;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iValue1)
		{
			bFlag=true;
			break;
		}
		
		
	}
	
	return bFlag;
}

int main()
{
	int NO;
	int iSize=0;
	int iCnt=0;
	int *ptr=NULL;
	bool bRet;
	
	printf("Enter elements in array: ");
	scanf("%d",&iSize);
	
	printf("Enter the number: ");
	scanf("%d",&NO);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter rhe elements in array: ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	bRet=Check(ptr,iSize,NO);
	
	if(bRet==true)
	{
		printf("Number is present");
	}
	else
	{
		printf("Number is not present");
	}
	
	free(ptr);
	
	return 0;
}


/*
C:\Users\gsona\Desktop\LB Assignment>gcc Assignment10(1).c -o myexe

C:\Users\gsona\Desktop\LB Assignment>myexe
Enter elements in array: 6
Enter the number: 66
Enter rhe elements in array: 85
66
3
66
93
88
Number is present
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter elements in array: 6
Enter the number: 12
Enter rhe elements in array: 85
11
3
15
11
111
Number is not present
*/