//question 2 parenthesis balancing
#include<iostream>
using namespace std;
struct node{
	char data;//character type ka hou ga data kyoun k brackets push kerwanay hain
	node *next;
};node *top;
class list
{
	public:
	list()
	{
		top=NULL;
		
	}
	void push(char n)//push mein bhi character ley ga phir bracket pushkerwayein gae
	{
		node *t=new node;
		if(t==NULL)
		{
			cout<<endl<<"stack overflow";
			return ;
		}
		else
		{
			t->data=n;
			t->next=top;
			top=t;
		}
	}
	char pop()//pop should retrun a character
	{
		char x=-1;//yahan bhi character hou ga
		if(top==NULL)
		{
			cout<<endl<<"Stack underflow";
		}
		else
		{
			node *t;
			t=top;
			x=t->data;
			top=top->next;
			delete t;
		}
		return x;
	}
bool isbalanced(char *exp)
{int i;
	char x;
	
	
	for(i=0;exp[i]!='\0';i++)
	{
			
		if(exp[i]=='('|| exp[i]=='[' || exp[i]=='{')
		{
			push(exp[i]);
		}
		
	    else if(exp[i]==')')
		{
			if(top==NULL)
			{
				return false;
			}
			x=pop();
			
			if(x=='[' || x=='{')
			{
				return 0;
			}
		}
		
		else if(exp[i]==']')
		{
			if(top==NULL)
			{
				return false;
			}
			x=pop();
			
			if(x=='(' || x=='{')
			{
				return false;
			}
		}
	    
	    else if(exp[i]=='}')
		{
			if(top==NULL)
			{
				return false;
			}
			x=pop();
			
			if(x=='[' || x=='(')
			{
				return false;
			}
		}		
			
	}
	if(top==NULL)
		{	return true;}//nothing in the stack, stack is balanced
			
	else
		{	return false;}//there is something in the stack not balanced
}


};
int main()
{
	char *exp="{25+(3-6)*8}"; //check for incorrect too
	list obj;
    if(obj.isbalanced(exp))
    cout<<"Is balanced";
    else
    cout<<"Not balanced";
	
}
