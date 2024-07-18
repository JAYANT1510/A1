/*
 * Stack1.c
 *
 *  Created on: 12 Jul 2024
 *      Author: ABHISHEK
 */
//wap in c to create a stack in c
#include<stdio.h>
#include<conio.h>
int maxsize=8,stack[8],top=-1;
int isempty()//this function checks if stack is empty or not
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isfull()
{
	if(top==maxsize)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int peek()
{
	return stack[top];
}
int pop()
{
	int data;
	if(!isempty())
	{
		data=stack[top];
		top=top-1;
		return data;
	}
	else
	{
		printf("Stack is empty");
		return 0;
	}
}
void push(int data)
{
	if(!isfull())
	{
		top=top+1;
		stack[top]=data;
	}
	else
	{
		printf("Could not insert data stack is full");
	}
}
int main()
{
  push(5);
  push(9);
  push(3);
  push(15);
  push(12);
  push(1);
  printf("Elements at top of stack %d\n",peek());
  printf("Elements \n");
  int data = pop();
  printf("%d\n",data);
  printf("Stack is full : %s\n",isfull()?"true":"false");
  printf("Stack is empty : %s\n",isempty()?"true":"false");
  return 0;
}

