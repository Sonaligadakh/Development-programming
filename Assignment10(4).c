//Accept N numbers from user and accept Range,Display all elements from that range.


//Input: 	N:	6
//			Start:60
//			End:90
//			Elements:85	66	3	76	93	88
//Output:	66	76	88

//Input: 	N:	6
//			Start:30
//			End:50
//			Elements:85	66	3	76	93	88
//Output:	


#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
	
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]>iStart)&&(Arr[iCnt]<iEnd))
		{
			printf("%d\t",Arr[iCnt]);
		}
		
	}
	
}

int main()
{
	int NO;
	int iSize=0;
	int iCnt=0;
	int iStart=0;
	int iEnd=0;
	int *ptr=NULL;
	//int iRet=0;
	
	printf("Enter elements in array: ");
	scanf("%d",&iSize);
	
	printf("Enter the start number: ");
	scanf("%d",&iStart);
	
	printf("Enter the end number: ");
	scanf("%d",&iEnd);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter rhe elements in array: ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	Range(ptr,iSize,iStart,iEnd);
	
	//printf("Numbers are: %d",iRet);

	free(ptr);
	
	return 0;
}