//Accept number of rows and number of columns from user and display below patterns.

//Input:	iRow=5		iCol=5
//Output:
/*
Output:		
			
*/


#include<stdio.h>
void Display(int iRow,int iCol)
{
	int i=0,j=0;
	int k=1;
	
	for(i=1;i<=iRow;i++)
	{
		//k=1;
		for(j=1;j<=iCol;j++)
		{
		
			
			printf("%2d\t",k++);
		}
		
		printf("\n");
	}
}


int main()
{
	
	int iValue1=0;
	int iValue2=0;
	
	printf("Enter no of rows: ");
	scanf("%d",&iValue1);
	
	
	printf("Enter no of columns: ");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	return 0;
}
/*


*/