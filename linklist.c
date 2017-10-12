#include<stdio.h>
#include<stdlib.h>
typedef struck linked_list
{
	int data;
	struck linked_list *next;
}node;
void print(node *q)
{
	node *ptr;
	ptr=q;
	printf("\n");
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}
void insbeg(node **q,int no)
{
	node *temp,*ptr;
	temp=*q;
	ptr=(node*)malloc(sizeof(node));
	ptr->data=no;
	if(temp==NULL)
	ptr->next=NULL;
	else
	ptr->next=temp;
	*q=ptr;
	printf("\nELEMENTS OF LINKLIST AFTER INSERTION\n");
	printf(*q);
}
void insend(node **q,int no)
{
	node *ptr,*temp;
	ptr=(node*)malloc(sizeof(node));
	ptr->data=no;
	ptr->next=NULL;
	temp=*q;
	if(temp==NULL)
	*q=ptr;
	else
	{
	while(temp->next!=NULL)
	temp=temp->next;
	temp->next=ptr;
}
	printf("\nELEMENTS OF LINKLIST AFTER INSERTION\n");
	printf(*q);	
}
void insafter(node *q,int no)
{
	int loc,k;
	node *temp,*ptr,*old;
	temp=q;
	ptr=(node*)malloc(sizeof(node));
	ptr->data=no;
	printf("ENTER LOCATION WHERE THE NO,IS TO BE INSERTED:");
	scanf("%d",&loc);
	for(k=1;k<loc;k++)
	{
		if(temp==NULL)
		printf("\n element are less than provide location\n");
		else
		{
			old=temp;
			temp=temp->next;}
		}
		ptr->next=temp;
		old->next=ptr;
		printf("\nelement of linklist after insertion\n");
		printf(q);
	}
void del(node **q,int no)
{
	int f=0;
	node *old,*temp;
	temp=*q;
	while(temp!=NULL)
	{
		if(temp->data==no)
		{
			f=1
			if(temp==*q)
			*q=temp->next;
			else
			old->next=temp->next;
			free(temp);
			break;
		}
		else
		{
			old=temp;
			temp=temp->next;
		}
	}
	if(f=0)
	printf("\n the no ids not found\n");
}
void traverse(node *q)
{
	printf("\n TRAVERSE LINLLIST\n\n");
	printf(q);
	printf("\n END OF LINKLIST");
}
int main()
{
	node *start,*ptr,*temp;
	int i,n,j,no,c;
	printf("ENTER THE NO OF NODES:");
	scanf("%d",&n);
	printf(" \n ENTER NODE NUMBER !:");
	start=(node*)malloc(sizeof(node));
	scanf("%d",&start->data);
	temp=start;
	for(i=1;i<n;i++)
	{
		ptr=(node*)malloc(sizeof(node));
		printf("\n ENTER NODE NO %d:",i+1);
		scanf("%d",&ptr->data);
		temp->next=ptr;
		temp=ptr;
	}
	temp->next=NULL;
	do
	{
		printf("\nENTER YOUR CHOICE\n");
		printf("\n1-INSERTION");
		printf("\n2-DELETION");
		printf("\n3-TRAVERSE");
		printf("\n4-EXIT\n \n");
		scanf("%d",&j);
		switch(j)
		{
			case 1:
			insbeg(&start,no);
			break;
			case 2:
			insend(&start,no);
			break;
			case 3:
			insafter(start,no);
			break;
			default:
			printf("\n INVALID CHOICE.");
			break;
		}
		break;
		case 2:
		printf("\nENTER THE NO TO BE DELETED:");
		scanf("%d",&no);
		del(&start,no);
		break;
		case 3:
		traverse(start);
		break;
		case 4:
		exit(0);
		default:
		printf("\n INVALID INPUT.");
		break;
	}
}while(1);
return 0;
}

