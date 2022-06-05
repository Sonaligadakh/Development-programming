//Write a program which search first occurrence of particular element from singly linear linked list.

#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node *next;
	
};


typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,int no)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	
	
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
	
	
}

int SearchFirstOcc(PNODE head,int no)
{
	int iCnt=0;
	while(head!=NULL)
	{
		iCnt++;
		if(head->data==no)
		{
			return iCnt;
			break;
		}
		
		head=head->next;
			
	}
	
}


int main()
{
	PNODE first=NULL;
	int iRet=0;
	
	InsertFirst(&first,70);
	InsertFirst(&first,30);
	
	InsertFirst(&first,50);
	
	InsertFirst(&first,40);
	
	InsertFirst(&first,30);
	
	InsertFirst(&first,20);
	 InsertFirst(&first,10);
	
	
	iRet=SearchFirstOcc(first,30);
	
	printf("First Occurrence is: %d\n",iRet);
	return 0;
} 