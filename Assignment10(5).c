//Accept N numbers from user and return product of all odd elements.

//Input: 	N:	6
//			Elements:15	66	3	70	10	88
//Output:	45

//Input: 	N:	6
//			Elements:44	66	72	70	10	88
//Output:	0






#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[],int iLength)
{
	int iCnt=0;
	int mult=1;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)!=0)
		{
			mult=mult*Arr[iCnt];
		}
		else 
		{
			return -1;
		}
		
	}
	return mult;
}

int main()
{
	int iSize=0;
	int iCnt=0;
	int iRet=0;
	int *ptr=NULL;
	
	
	printf("Enter number of elements: ");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter elements in array: ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
    iRet=Product(ptr,iSize);
	
	printf("Multiplication is: %d",iRet);
	
	return 0;
}
