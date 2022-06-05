//Accept N numbers from user and display all such elements which are divisible by 3 and 5.

//Input: 	N:	6
//			Elements:85	66	3	15	93	88
//Output:15



#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(((Arr[iCnt]%3)==0)&&((Arr[iCnt])%5==0))
		{
			printf("Result is: %d",Arr[iCnt]);
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

/*

C:\Users\gsona\Desktop\LB Assignment>gcc Assignment8(4).c -o myexe

C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number of elements: 6
Elements in array are: 85
66
3
15
93
88
Result is: 15
*/