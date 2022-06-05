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




int Minimum(PNODE head)
{
	

	int Min=head->data;
	while(head!=NULL)
	{
	if(Min>head->data)
	{
		Min=head->data;
	}
	
		head=head->next;
	}
	return Min;
}


int main()
{
	PNODE first=NULL;
	int iRet=0;

	
	InsertFirst(&first,240);
	
	InsertFirst(&first,320);
	
	InsertFirst(&first,230);
	 InsertFirst(&first,110);
	
	
	iRet=Minimum(first);
	
	printf("Smallest number   is: %d\n",iRet);
	return 0;
} 