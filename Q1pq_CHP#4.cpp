//programming questions
//q1 palindromes
#include<iostream>
using namespace std;

struct node{
	char data;
	node *next;
};
class list
{
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

	int check_pali(list *stack2,int size)
	{
		static int a=0;
	     node *t1=this->head, *t2=stack2->top;
	    while(a!=size)
		{
		  if(t1->data==t2->data)
	     {
	     	++a;
	     	t1=t1->next;
	     	t2=t2->next;
		 }
		 else
		 {
		 	return 0;
		 }
	    }
	    return 1;
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
	list stack1,stack2;
	int i,size,ans;
	cout<<"Enter the size of your word: ";
	cin>>size;
	cout<<endl;
	char n;
	string word;
	for(i=0;i<size;i++)
	{
		cin>>word[i];
		n=word[i];
		stack1.push(n);
	}
	stack1.reversestack(stack2);
	cout<<endl;
	stack1.display1();
	cout<<endl;
	stack2.display2();
	cout<<endl;
	ans=stack1.check_pali(&stack2,size);
	if(ans==1)
	{
		cout<<endl<<"It is a palindrome";
	}
	else
	{
		cout<<endl<<"It is not a palindrome";
	}

}
