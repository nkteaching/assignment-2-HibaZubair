#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};node *top;
class list{
public:
		node *top,*head;
	list()
	{
		top=NULL;	
	}
	void push(char n)
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
			head=t;
		}
	}
	char pop()
	{
		char x=-1;
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
		void reversestack(list &otherstack)
		{
			int x;
			
			while(!isempty())
			{
				
				otherstack.push(this->pop());
			}
			
		}
    void add_largenumbers(list &stack1,list &stack2,int size)//stack3 sey call kerein gae
    {
    	static int a=0;
    	node *t1,*t2,*t3;
    	t1=stack1.head;
    	t2=stack2.head;
    	t3=this->head;
    	int n,carry=0;
    	while(t2!=NULL)
    	{
    		++a;
    		n=t1->data+t2->data;
    		cout<<endl<<"n: "<<n;
    		if(n>=10)
    		{
    			
    			n=n%10;
    			n=n+carry;
    			this->push(n);
    			carry=1;
    			t1=t1->next;
			    t2=t2->next;
			}
			else
			{
				n=n+carry;
				carry=0;
				this->push(n);
				t1=t1->next;
			    t2=t2->next;
			}
			
		
		}
		
		while(t2!=NULL)
		{
			this->push(t2->data);
			t2=t2->next;
		}
		while(t1!=NULL)
		{
			this->push(t1->data);
			t1=t1->next;
		}
		if(carry==1)
		{
				this->push(carry);
		}
		else
		{
			return;
		}
	}
    
    
    
		void display1()
		{
			node *current;
			current=head;
			while(current!=NULL)
			{
				cout<<current->data;
				current=current->next;
			}
		}
	void display2()
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
	list stack1,stack2,stack3;
	int num1,num2,num,i,j;
	cout<<"Enter a number: ";
	cin>>num1;
	while(num1!=0)
	{
		num=num1%10;
		stack1.push(num);
		num1=num1/10;
		++i;
	}
	stack1.reversestack(stack2);
	cout<<endl<<"Enter a number: ";
	cin>>num2;
	while(num2!=0)
	{
		num=num2%10;
		stack3.push(num);
		num2=num2/10;
		++j;
	}
	stack3.reversestack(stack1);
	cout<<endl<<"stack1: ";
	stack1.display2();
	cout<<endl<<"stack2: ";
	stack2.display1();
	if(i>j)
	{
	stack3.add_largenumbers(stack1,stack2,i);
    }
	if(j>i)
	{
	stack3.add_largenumbers(stack1,stack2,j);
    }
	else
	{
	stack3.add_largenumbers(stack1,stack2,i);
    }
	cout<<endl;
	stack3.display1();
	
}
