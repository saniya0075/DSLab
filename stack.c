#include<stdio.h>
#define MAX_SIZE 10

int stack[MAX_SIZE],top=-1
int isFULL(){
//returns 1 if stack is full else returns -1	
 if(top==MAX SIZE -1)
return 1;
else
return -1;
}

int isEmpty(){
//returns 1 if stack is full else returns -1	
 if(top==-1)
  return 1;
  else
  return -1;
 }
  

int peek(){
 return stack[top];
//return the element at the top of stack
}

void push(int e){
	//
 if(!=isFull)
{
	top++;
	stack[top]=e;
	printf("element e is successfully inserted");
  }
  else{
	  printf("stack overflow");
 }
//inserts the element into stack
}

void pop(){
//deletes an elememnt from top of stack
int d;=stack[top];
if(!isEmpty)
{
	 d=stack[top];
	 top--;
	 printf("element d is successfully deleted");
 }
 else
 printf("stack underflow");
}
} 
int main(){
	int choice,e;
	do
	{
		printf("menu\n1.peek\t2.push\t3.pop\t4.exit\n);
		printf("enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case1:peek();
			break;
			case2:push();
			break;
			case3:pop();
			break;
			case4:exit();	break;
			default:
				printf("invalid choice");
		}
	}while(1);
	return 0;
}
	

	
