//Accept number of rows and number of columns from user and display below patterns.

//Input:	iRow=4		iCol=4
//Output:
/*
Output:	
*       *       *       *
*       *       *
*       *
*

*/


#include<stdio.h>
void Display(int iRow,int iCol)
{
	
	int i=0,j=0;
	int k=1;
	
	
	if(iRow!=iCol)
	{
		printf("Invalid input!!!!");
		return;
	}
	
	
	
	for(i=1;i<=iRow;i++)
	{
		
		for(j=iCol;j>=i;j--)
		{
			printf("*\t");
			
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
C:\Users\gsona\Desktop\LB Assignment>gcc Assignment17(2).c -o myexe

C:\Users\gsona\Desktop\LB Assignment>myexe
Enter no of rows: 4
Enter no of columns: 4
*       *       *       *
*       *       *
*       *
*

*/