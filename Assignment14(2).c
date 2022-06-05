

//Accept number of rows and number of columns from user and display below patterns.

//Input:	iRow=4		iCol=4
//Output:
/*
Output:
		A	B	C	D
		a	b	c	d
		A	B	C	D
		a	b	c	d

*/


#include<stdio.h>
void Display(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='a';
	char cha='A';
	
	for(i=1,ch='a',cha ='A';i<=iRow;i++,ch++,cha++)
	{
		for(j=1,cha='A',ch='a';j<=iCol;j++,cha++,ch++)
		{
			if(i%2==0)
			{
				printf("%c\t",ch);
			}
			else
			{
				printf("%c\t",cha);
			}
			
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

C:\Users\gsona\Desktop\LB Assignment>gcc Assignment14(2).c -o myexe

C:\Users\gsona\Desktop\LB Assignment>myexe
Enter no of rows: 4
Enter no of columns: 4
A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d

*/