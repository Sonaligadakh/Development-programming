//Accept number from user and display below pattern.

//Input:	5
//Output:	1	*	2	*	3	*	4	*	5	*

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\t#\t",iCnt);
	}
	
}


int main()

{
	int iValue=0;
	
	printf("Enter number of elements: ");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}

/*
C:\Users\gsona\Desktop\LB Assignment>gcc Assignment12(3).c -o myexe

C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number of elements: 5
1       #       2       #       3       #       4       #       5       #
*/



//Time Complexity:O(N)