
//Accept N numbers from user and display all such elements which are divisible by 3 and 5.

//Input: 	N:	6
//			Elements:85	66	3	55	93	88
//Output:	66	55	88



#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%11)==0)
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
	
	
	printf("Enter number of elements: ");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Elements in array are: ");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	Display(ptr,iSize);
	
	free(ptr);
	
	return 0;
}