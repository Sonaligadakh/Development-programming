//Accept N numbers from user and display summation of digits of each number.
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	int iDigit=0;
	int iSum=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=0;
		
		while(Arr[iCnt]>0)
		{
			iDigit=Arr[iCnt]%10;
			iSum=iSum+iDigit;
			
			Arr[iCnt]=Arr[iCnt]/10;
			
			
				
		}
		
      printf("%d\t",iSum);
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

//Input:	N:	6
//			Elements:8225	665	3	953	858
//Output:17	17	3	13	17	21


