//Accept number of rows and number of columns from user and display below patterns.

//Input:iRow=4	iCol=5
//Output:
/*
			1	2	3	4
			5	6	7	8
			9	10	11	12
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter  number of rows: ");
	scanf("%d",&iValue1);
	
	printf("Enter number of columns: ");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}

/*

C:\Users\gsona\Desktop\LB Assignment>myexe
Enter  number of rows: 4
Enter number of columns: 5
4       4       4       4       4
3       3       3       3       3
2       2       2       2       2
1       1       1       1       1
*/