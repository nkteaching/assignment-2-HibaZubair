//Transfer elements from stack S1
// to stack S2
// so that the elements from S2
// are in the
//same order as on S1
//a. using one additional stack
//b. using no additional stack but only some additional nonarray variables
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
		void reversestack(list &ss)
		{
			int x;
			
			while(!isempty())
			{
				ss.push(pop());
			}
			
		}
		
			void display()
		{
			node *current;
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
	list s,stack1,stack2;
	cout<<"How many elements you want to enter in stack 1"<<endl;
	cin>>size;
	for(i=0;i<size;i++)
	{
		cin>>n;
		stack1.push(n);
	}
	stack1.reversestack(s);
	
    s.reversestack(stack2);
    
    stack2.reversestack(stack1);
    
    cout<<endl;
	stack1.display();
	
}
