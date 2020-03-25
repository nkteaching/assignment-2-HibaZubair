//q4 copy reversed stack of one in to another
//stack by linked list
#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class list
{

	public:
		node *top;
	list()
	{
		
		top=NULL;
		
	}
	void push(int n)
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
	int pop()
	{
		int x=-1;
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
    int isempty()
    {
    	if(top==NULL)
    	{
    		cout<<endl<<"Stack underflow"<<endl;
    		return 1;
		}
		return 0;
	}
		void reversestack(list &otherstack)
		{
			int x;
			
			while(!isempty())
			{
				cout<<"herrkajd";
				
				otherstack.push(this->pop());
			}
			
		}
		
			void display()
		{
			node *current;
			cout<<endl<<"Display stack: ";
			current=top;
			while(current!=NULL)
			{
				cout<<current->data;
				current=current->next;
			}
		}
};
int main()
{
	int i,size,n;
	list stack1,stack2;
	cout<<"How many elements you want to enter in stack 1"<<endl;
	cin>>size;
	for(i=0;i<size;i++)
	{
		cin>>n;
		stack1.push(n);
	}
	stack1.reversestack(stack2);
	cout<<endl<<"Stack 2(elements in reverse order): "<<endl;
   
    cout<<endl;
	stack2.display();
	
}
