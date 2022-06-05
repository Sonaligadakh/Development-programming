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




int Maximum(PNODE head)
{
	

	int Max=head->data;
	while(head!=NULL)
	{
	if(Max<head->data)
	{
		Max=head->data;
	}
	
		head=head->next;
	}
	return Max;
}


int main()
{
	PNODE first=NULL;
	int iRet=0;

	
	InsertFirst(&first,240);
	
	InsertFirst(&first,320);
	
	InsertFirst(&first,230);
	 InsertFirst(&first,110);
	
	
	iRet=Maximum(first);
	
	printf("Largest number   is: %d\n",iRet);
	return 0;
} 