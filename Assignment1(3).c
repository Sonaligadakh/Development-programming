//program to print 5 to 1 numbers on screen

#include<stdio.h>
void Display()
{

	int i=0;
	
	//r(i=1;i<=5;i++)
		for(i=5;i>=1;i--)
	{
		printf("%d",i);
		
	}
	
}


int main()
{
	Display();
	return 0;
}