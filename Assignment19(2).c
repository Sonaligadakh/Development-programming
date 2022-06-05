//Writa a program which serach last occurrence of particular element from singly linear linked list.


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

int Count(head)
{
	int iCnt=0;
	while(head!=NULL)
	{
		iCnt++;
		head=head->data;
	}
	return iCnt;
}


int SearchLastOcc(PNODE head,int no)
{
	PNODE prev=NULL;
	int iCnt=Count(*head);
	while(head!=NULL)
	{
		iCnt--;
		if(head->data==no)
		{
			return iCnt;
			
		}
		
		head=head->next;
			head->next=prev;
			head->prev=head;
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
	
	
	iRet=SearchLastOcc(first,30);
	
	printf("Last Occurrence is: %d\n",iRet);
	return 0;
} 