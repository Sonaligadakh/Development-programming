//Accept N numbers from user and accept one another number as NO,
//return index of last occurrence of that NO.


//Input: 	N:	6
//			NO:66
//			Elements:85	66	3	66	93	88
//Output:	3

//Input: 	N:	6
//			NO:93
//			Elements:85	66	3	66	93	88
//Output:	-4

//Input: 	N:	6
//			NO:12
//			Elements:85	11	3	15	11	111
//Output:	-1

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int LastOccur(int Arr[],int iLength,int iValue1)
{
	int iCnt=0;

   for(iCnt=iLength;iCnt>=0;iCnt--)
   {
	   if(Arr[iCnt]==iValue1)
	   {
		  return iCnt;
		  break;
	   }

	   
	   
   }
    if(iCnt==iLength)
	   {
		   return -1;
	   }
  
   
}

int main()
{
	int NO;
	int iSize=0;
	int iCnt=0;
	int *ptr=NULL;
	int iRet=0;
	
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
	
	iRet=LastOccur(ptr,iSize,NO);
	
	if(iRet==-1)
	{
		printf("There is no such number");
	}
	else
	{
		printf("Last occurrence of number is %d",iRet);
	}
	
	

	free(ptr);
	
	return 0;
}

/*
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter elements in array: 6
Enter the number: 66
Enter rhe elements in array: 85
66
3
66
93
88
Last occurrence of number is 3
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter elements in array: 6
Enter the number: 93
Enter rhe elements in array: 85
66
3
66
93
88
Last occurrence of number is 4
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter elements in array: 6
Enter the number: 12
Enter rhe elements in array: 85
11
3
15
11
111
There is no such number
C:\Users\gsona\Desktop\LB Assignment>gcc Assignment10(2).c -o myexe


*/





















































