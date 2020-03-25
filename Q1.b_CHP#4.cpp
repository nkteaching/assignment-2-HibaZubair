//q1 part b with queue
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
		node *top,*topq=NULL,*a;
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
	void pushqueue(int n)
	{
		node *t=new node;
		t->data=n;
		t->next=NULL;
		if(topq==NULL)
		{
			topq=t;
			a=t;
		}
		else
		{ 
		    
			topq->next=t;
			topq=topq->next;
			
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
		void reversestack(list &otherqueue)
		{
			int x;
			
			while(!isempty())
			{
				
				x=this->pop();
				otherqueue.pushqueue(x);
				
			}
			
		}
		
			void display()
		{
			node *current;
			current=a;
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
	list stack1,queue;
	cout<<"How many elements you want to enter in stack 1"<<endl;
	cin>>size;
	for(i=0;i<size;i++)
	{
		cin>>n;
		stack1.push(n);
	}
	stack1.reversestack(queue);
	cout<<endl<<"Queue(elements in reverse order): "<<endl;
   
    cout<<endl;
	queue.display();
	
}
