#include<stdio.h>
void Display(int iRow,int iCol)
{
	int i=0,j=0;
	int k=1;
	
	for(i=1;i<=iRow;i++)
	{
	
		for(j=1;j<=iCol;j++)
		{
		
			if(i%2==0)
			{
				printf("%d",j);
			}
			else
			{
				printf("%d",j+1);
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


*/