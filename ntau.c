#include<stdio.h>
#include<conio.h>
#define Max 5
#define True 1
#define False 0

void push(int s[Max],int e);
int pop(int s[Max],int e);
void display(int s[Max]);
int isFull();
int isEmpty();

int top=-1;

int isFull()
    {
	 if(top==Max-1)
		return True;
	 	else 
		return False;
    }
    
int isEmpty()
	{
	 if(top==-1)
	 return True;
	 else
		return False;
    }
    
void push(int s[Max],int e)
{
	 if(isFull())
		 {
		 printf("Stack is full");
	     }
	       else
	        {
	         top=top+1;
	         s[top]=e;
	        }
}

int pop(int s[Max],int e)
	{
	if(isEmpty())
		{
	  printf("Stack is empty");
	  e=-1;
	    }
	else
		{
		e=s[top];
		top=top-1;
		}
		return e;
	 }	 
void display(int s[Max])
	{
	 int i;
	 if(isEmpty())
		 {
	      printf("Stack is empty");
	     }
	 else 
		 {
		   for(i=top;i>-1;i--)
	       printf("\t\t\t\t%d\n",s[i]);
	     }
    }
    
void main(){
	 int choice,e,s[Max],top=-1;
	 do 
		 {
		system("cls");
		 printf("\t\t\t\tMENU\n");
		 printf("\t\t\t1.push\n");
		 printf("\t\t\t2.pop\n");
		 printf("\t\t\t3.display\n");
		 printf("\t\t\t4.Exit\n");
		 printf("Choose Number:");
		 scanf("%d",&choice);
		 switch(choice)
			 {
		      case 1: system("cls");
		              printf("\t\t\tpush element:");
		              scanf("%d",&e);
		              push(s,e);
		              getch();
		              break;
		     case 2: e=pop(s,e);
		             if(e!=-1)
						 printf("pop element:%d\n",e);
		             getch();
		             break;
		     case 3: display(s);
		             getch();
		             break;
		     case 4: break;
		   }
	 }
	 while(choice!=4);
}
