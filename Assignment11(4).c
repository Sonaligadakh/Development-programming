//Accepts N Numbers from user and display all sucnh a numbers which contains 3 digits in it.

//Input:	N:	6
//			Elements:8225	665	3	953	858
//Output:665 	953		858


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	int iDigit=0;
	int iCount=0;
	int temp=0;
	
	
	for(iCnt=0;iCnt<iLength;iCnt++)
		
	{
		
		temp=Arr[iCnt];
		iCount=0;
		while(Arr[iCnt]>0)
		{
			
			iDigit=Arr[iCnt]%10;
			iCount++;
			
			Arr[iCnt]=Arr[iCnt]/10;
			
			
				
		}
		
		if(iCount==3)
		{
			printf("%d\t",temp);
		
		}
		
	
	}
			
	
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
	
	Display(ptr,iSize);
	

	free(ptr);
	return 0;
}


/*
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number of elements : 6
Enter elements of array : 8225
665
3
76
953
858
665     953     858

*/