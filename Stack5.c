/*
 * Stack5.c
 *
 *  Created on: 14 Jul 2024
 *      Author: ABHISHEK
 */
#include<stdio.h>
#include<conio.h>
#define size 100
struct stack
{
	int list[size];
	int top;
};
void push(struct stack *sp,int x)
{
	if((sp->top)==(size-1))
	{
		printf("\n Overflow");
	}
	sp->list[++sp->top]=x;
	return;
}
int pop(struct stack *sp)
{
  /* Check for stack underﬂ ow */
 if(sp->top == -1)
 {
   printf('\nSTACK IS EMPTY i,e UNDERFLOW');
   return (-1);
  }
 return(sp->list[sp->top--]);
}
int peek(struct stack p)
{
  int n;
  if(p.top == -1)
 {
   printf('\nSTACK IS EMPTY i,e UNDERFLOW');
   return (-1);
 }
 n = p.list[p.top];
 return n;
}
int main()
{
	 char a1;
	 struct stack s;
	 int opt,x,n;
	  /* Initializing stack to empty */
	 s.top =-1;
	 printf('\n1.PUSH 2.POP 3.PEEK 4.EXIT\n');
	 do
	 {
	  printf('\n ENTER YOUR CHOICE :');
	  scanf('%d',&opt);
	  switch(opt)
	  {
	   case 1:
	    printf('\nENTER THE NO :');
	    scanf('%d',&x);
	    push(&s,x);
	    break;
	   case 2:
	    n = pop(&s);
	    if(n != -1)
	    {
	     printf('\nPOPPED VALUE :%d',n);
	    }
	    break;
	   case 3:
	       n = peek(s);
	       if(n != -1)
	       {
	       printf('\nTOP ELEMENT :%d',n);
	       }
	       break;
	   default:
		   printf("Wrong choice");
	       }
	  printf("Do you want to continue enter [y,n] :");
	  scanf("%s",&a1);
	    }while(a1=="Y"||a1=="y");
	 getch();
	 return 0;
}
