/*
 * Stack4.c
 *
 *  Created on: 13 Jul 2024
 *      Author: ABHISHEK
 */

#include<stdio.h>
#include<conio.h>
int stack[10],top=0,item,store,a2;
//push function inserts element in stack
void push()
{
   if(top==-1)
   {
	   printf("Stack is empty");
   }
   else if(top==10)
   {
	   printf("Stack is full");
   }
   else
   {

	   printf("Insert element in stack :");
	   scanf("%d",&stack[top]);
	   top=top+1;
   }
   store=top;
}
//pop function removes function from stack
void pop()
{
	if(store==-1)
	{
		printf("Stack is empty");
	}
	else
	{

		item=stack[store];
		printf("Item removed = %d",item);
		store=store-1;
	}
}
//traverse function prints element in stack
void traverse()
{
	int i;
	if(top==-1)
	{
		printf("\nStack is empty");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
		}
	}
}
int main()
{
   char a1;
   do
   {
	   int a;
	   printf("Enter any one operation to perform on stack");
	   printf("\n1 push \n 2 pop \n 3 traverse");
	   printf("\n Enter option: ");
	   scanf("%d",&a);
	   switch(a)
	     {
	        case 1:
		        push();
		        break;
	        case 2:
		        pop();
		        break;
	        case 3:
		        traverse();
		        break;
	        default:
		        printf("\nWrong choice");//default loop if a value is greater than 3
	     }
	   printf("\nDo you want to continue enter [y,n] :");
	   scanf("%s",&a1);//takes input for loop continue or exit
    }while(a1=='Y'||a1=='y');//checks condition do you want to continue
   getch();
   return 0;
}



