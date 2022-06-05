//Accept number of rows and number of columns from user and display below patterns.

//Input:	iRow=4		iCol=4
//Output:
/*
Output:
		A	B	C	D
		A	B	C	D
		A	B	C	D
		A	B	C	D

*/


#include<stdio.h>
void Display(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='A';
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch='A';j<=iCol;j++,ch++)
		{
				printf("%c\t",ch);
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
C:\Users\gsona\Desktop\LB Assignment>gcc Assignment14(1).c -o myexe

C:\Users\gsona\Desktop\LB Assignment>myexe
Enter no of rows: 4
Enter no of columns: 4
A       B       C       D
A       B       C       D
A       B       C       D
A       B       C       D

*/