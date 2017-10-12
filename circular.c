#include<stdio.h>
#include<math.h>
#define MAX_SIZE 10

int queue[MAX_SIZE],front=-1,rear=-1;

int isFull()
{
	//returns 1 if queue is full else returns -1
	if(rear==MAX_SIZE-1 &&front==0)||rear+1==front)
	return 1;
	else
	return 0;
}

int isEmpty()
{
//returns 1 if stack is empty else returns -1
if(rear==-1&&front==-1)
return 1;
else
return 0;
}

void display()
{ 
	int i=front;
	while(i!=rear)
	{
	printf("%d \n",queue[i]);
	i=(i+1)%MAX-SIZE;
}
	
//return element at the front of queue
}

void insertqueue(int d)
{
if(!isfull())
{
  if(isempty())
  {
    front++;
    }
    rear=(rear++)%MAX_SIZE;
    queue[rear]=d;
    printf(" element is successfully inserted");
    }
    else
    {
    printf("the queue is full,element cannot be inserted");
    }
    }
  
  void deletequeue()
  {
	  if(!isEmpty)
	  {
		  int d=queue[front];
		  if(front==rear)
		  {
			  front=rear=-1;
		  }
		  else
		  {
		  front=(front++)%MAX_SIZE;
		  printf("the element deleted is %d",d);`
	  }
  }
}
    
int main()
{
   int choice,e;
	do
	{
		printf("enter\n1.display\n2.insert\t3.delete\t4.exit\n");
		printf("please enter your choice\n");
		scanf("%d"&choice);
		switch(choice){
			case 1:e=display();
				printf("element at the front of the queue=%d",e);
				break; 
			case 2:
				printf("enter the element to be inserted :");
				scanf("%d,&e)
				
				insertqueue(e);
				break;
			case 3:deletequeue();
				break;
			case 4:
			exit(0)
			break;
			default:printf("invalid choice");tt
		}
	}while(1);
	return 0;
}

