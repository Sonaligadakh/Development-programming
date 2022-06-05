//Accept number of rows and number of columns from user and display below patterns.

//Input:	iRow=3		iCol=5
//Output:
/*
Output:
		A	A	A	A	A
		B	B	B	B	B
		C	C	C	C	C
		

*/


#include<stdio.h>
void Display(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='A';
	
	
	for(i=1,ch='A';i<=iRow;i++,ch++)
	{
		
		for(j=1;j<=iCol;j++)
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
C:\Users\gsona\Desktop\LB Assignment>gcc Assignment14(3).c -o myexe

C:\Users\gsona\Desktop\LB Assignment>myexe
Enter no of rows: 3
Enter no of columns: 5
A       A       A       A       A
B       B       B       B       B
C       C       C       C       C

*/