#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	
};

typedef  struct node NODE;
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



void Display(PNODE head)
{
	int i;
	int iSum=0;
	
	while(head!=NULL)
	{
		iSum=0;
		for(i=1;i<(head->data);i++)
		{
			if(((head->data)%i)==0)
			{
				iSum=iSum+i;
			}
			
			
		}
		if(iSum==head->data)
		{
		printf("%d\t",head->data);
		}
		
		
		head=head->next;
		
	}
	
	
}

int main()
{
	PNODE first=NULL;
	

	



	InsertFirst(&first,11);
	InsertFirst(&first,17);
	InsertFirst(&first,41);

	InsertFirst(&first,28);
	InsertFirst(&first,6);	
	InsertFirst(&first,89);
		
			Display(first);
	return 0;
}
