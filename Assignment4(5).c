/* program which accept number from user and return difference between summation of all its  
 factors and non factors.   */
 
 //Input:12
 //Output:-34
 
 //Input:10
 //Output:-29
 
 
 #include<stdio.h>
 
 int SumFact(int iNo)
 {
	 int iCnt=0;
	 int iSum=0;
	 for(iCnt=1;iCnt<iNo;iCnt++)
	 {
		 if(iNo%iCnt==0)
		 {
			 iSum=iSum+iCnt;
		 }
		 
	 }
	 return iSum;
 }
 
 int SumNonFact(int iNo)
 {
	 int iCnt=0;
	 int iSumNonFact=0;
	 
	 for(iCnt=1;iCnt<iNo;iCnt++)
	 {
		 if(iNo%iCnt!=0)
		 {
			 iSumNonFact=iSumNonFact+iCnt;
		 }
	 }
	 return iSumNonFact;
 }
 
 
 int FactDiff(int iNo)
 {
	 int iDiff=0;
	 iDiff=SumFact(iNo)-SumNonFact(iNo);
	 return iDiff;
 }
 
 int main()
 {
	 int iValue=0;
	 int iRet=0;
	 
	 printf("Enter number: ");
	 scanf("%d",&iValue);
	 
	 iRet=FactDiff(iValue);
	 
	 printf("Difference of all factors and non factor is : %d",iRet);
	 return 0;
 }
 