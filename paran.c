#include<stdio.h>
#include<ctype.h>
#define MAX 100
typedef struct stack
{
    char a[30];
	int top;
}stack;
void push(stack*,char);
char pop(stack*);
void checkcontinuity(char []);
int ismatchingpair(char,char);

    int main()
{
	char exp[30];
	int result;
	printf("enter the expression containing only brackets\n");
	scanf("%s",exp);
	checkcontinuity(exp);
	return 0;
	
	
int ismatchingpair(char left,char right)
{
 switch(left)
 {
   case'(':if(right==')')
    return 1;
    else return 0;
    case'{':if(right=='}')
    return 1;
    else return 0;\
    case'[':if(right==']')
    return 1;
    else return 0;
    default: return 0;
}
}
 void checkContinuity(char exp[])
 {
	 int i;
	 char c;
	 stack s;
	 s.top=-1;
	 for(i=0;exp[i]!=0;i++)
	 {
		 if(exp[i]=='('||exp[i]=='('||exp[i]=='[')
		 push(&s,exp[i]);
		 else
		 {
			 if(s.top==-1)
			 {
				 printf("invalid expression\n");
			 return;
		 }
			 else
		 {
			 c=pop(&s);
			 if(ismatchingpair(c,exp[i]))
			 continue;
			 else{
			 printf("invalid");
			 return;
		 }
	 }
 }
}

 if(s,top==-1)
 {
	 printf("expression is  valid"\n);
	 else
	 printf("expression is invalid"\n);
 }

void push(stack *s,char opr)
{
		s->top++;
		s->a[s->top]=opr;
	}
	
char pop(stack *s)
{
	if(s->top==-1)
	{
		printf("stack is empty\n");
		
		return 0;
	}
	else
	{
		char data=s->a[s-top--];
		return data;
	}
}

  
