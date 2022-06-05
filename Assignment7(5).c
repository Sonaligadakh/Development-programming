/*
Write a program which accept number from user and return difference between summation of even digits and 
 summation of odd digits
 
 //Input:2395
 //Output:-15   (2-17)
 
 //Input:1018
 //Output:6   (8-2)
 
 //Input:8440
 //Output:16   (16-0)
 
 //Input:5733
 //Output:-18   (0-18)
 
 */
 
 #include<stdio.h>
 
 int CountDiff(int iNo)
 {
	 int iDigit=0;
	 int iCnt=0;
	 int iEvenSum=0;
	 int iOddSum=0;
	 int iDiff=0;
	 
	 while(iNo>0)
	 {
		 iDigit=iNo%10;
		 if(iNo%2==0)
		 {
			iEvenSum=iEvenSum+iDigit; 
		 }
		 else if(iNo%2!=0)
		 {
			iOddSum=iOddSum+iDigit;
		 }
		 
		 iNo=iNo/10;
	 }
	 iDiff=iEvenSum-iOddSum;
	 return iDiff;
	 
	 
 }
 
 int main()
 {
	 int iValue=0;
	 int iRet=0;
	 
	 printf("Enter number: ");
	 scanf("%d",&iValue);
	 
	 iRet=CountDiff(iValue);
	 
	 printf("Difference is :%d",iRet);
	 return 0;
	 
 }
 
 
 /* 
 C:\Users\gsona\Desktop\LB Assignment>gcc Assignment7(5).c -o myexe

C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number: 2395
Difference is :-15
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number: 1018
Difference is :6
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number: 8440
Difference is :16
C:\Users\gsona\Desktop\LB Assignment>myexe
Enter number: 5733
Difference is :-18
C:\Users\gsona\Desktop\LB Assignment>


*/






