//Accept number of rows and number of columns from user and display below patterns.

//Input:	iRow=6		iCol=6
//Output:
/*
Output:	
1       2       3       4       5
1       2                       5
1               3               5
1                       4       5
1       2       3       4       5
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
		
		for(j=1;j<=iCol;j++)
		{
			if((i==1)||(i==iCol)||(j==1)||(j==iCol)||(i==j))
			{
				printf("%d\t",j);
			}
			
			
			
			
			else
			{
				printf(" \t");
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

C:\Users\gsona\Desktop\LB Assignment>gcc Assignment18(5).c -o myexe

C:\Users\gsona\Desktop\LB Assignment>myexe
Enter no of rows: 5
Enter no of columns: 5
1       2       3       4       5
1       2                       5
1               3               5
1                       4       5
1       2       3       4       5



*/