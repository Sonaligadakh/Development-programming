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
	int iMult=1;
	int iDigit=0;
	
	while(head!=NULL)
	{
		iMult=1;
			while(head->data>0)
			{
				iDigit=head->data%10;
				if(iDigit==0)
				{
					continue;
				}
				
				
				iMult=iMult*iDigit;
				head->data=head->data/10;
			}
			
				
			printf("%d\t",iMult);
			
			
	
		
		
		head=head->next;
		
	}
	
	
}

int main()
{
	PNODE first=NULL;
	
	
	
	
	
	
	
	
	
	InsertFirst(&first,41);
InsertFirst(&first,32);
	InsertFirst(&first,20);
	InsertFirst(&first,11);
	Display(first);
	
	
	return 0;
}
