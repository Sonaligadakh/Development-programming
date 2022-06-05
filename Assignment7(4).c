//Write a program which accept number from user and return multiplication of all digits.

//Input:2395
//Output:270

//Input:1018
//Output:8

//Input:9440
//Output:144

//Input:922432
//Output:864

#include<stdio.h>
int MultDigits(int iNo)
{
	int iDigit=0;
	int iMult=1;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		
		if(iDigit!=0)
		{
			
		iMult=iMult*iDigit;
		}
		iNo=iNo/10;
		
		
	}
	return iMult;
}



int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number: ");
	scanf("%d",&iValue);
	
	iRet=MultDigits(iValue);
	
	printf("Multiplication is : %d",iRet);
	return 0;
}


/*
C:\Users\gsona\Desktop\LB Assignment>gcc Assignment7(4).c -o myexe

C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number: 2395
Multiplication is : 270
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number: 1018
Multiplication is : 8
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number: 9440
Multiplication is : 144
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number: 922432
Multiplication is : 864
C:\Users\gsona\Desktop\LB Assignment>

/*