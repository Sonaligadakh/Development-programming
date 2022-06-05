//Accept N numbers from user and display all such  elements which are divisible by 5.

//Input: 		N:	6
//Output:		Elements:	85	66	3	80	93	88


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt])%5==0)
		{
			printf("%d\t",Arr[iCnt]);
		}
		
	}
	
	
}



int main()
{
	int iSize=0;
	int iCnt=0;
	
	int *ptr=NULL;
	
	printf("Enter number of elements :");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	
	
	
	printf("Elements in array: ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	Display(ptr,iSize);
	
	free(ptr);
		
	return 0;
}



/*
Enter number of elements :6
Elements in array: 85
66
3
80
93
88
85      80

*/