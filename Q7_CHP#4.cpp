#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class list{
	
	public :
		node *head,*tail,*top;
		list()
		{
			head=NULL;
			tail=NULL;
		}
		void push (int n)
	{
			node *temp=new node;
			if (temp==NULL)
			{
				cout << "Queue Overflow"<<endl;
			}
			else {
				temp->data=n;
			    temp->next=NULL;
			    if (head==NULL)
			    {
			    	top=head=tail=temp;
				}
				else
				 {
					tail->next=temp;
					tail=tail->next;
				}
	       }
    }
    
      int pop ()
	{
      	node *t;
      	int z;
      	if (head==NULL)
      	{
      		cout << endl<<"Queue underflow"<<endl;
		}
		else 
		{
			top=t;
			t=head;
			head=head->next;
			z=t->data;
			delete t;
			return z;
		} 
	}
	int peek ()
	  {
	  	if (head!=NULL)
	  	{
	  		return head->data;
		}
		  else 
		{
		  	return -1;
		}
	  }
	  void stackqueue(list &q1,list &q2,int n)
		{
			int x;
			while (!q1.isempty())
			{
				x=q1.pop();
				cout<<endl<<"x: "<<x; 
				q2.push(x);
			}
			q1.push(n);
			while(!q2.isempty())
			{
				x=q2.pop();
				cout<<endl<<"x: "<<x;
				q1.push(x);
			}
		}	
	  int isempty()
    {
    	if(head==NULL)
    	{
    		cout<<endl<<"Queue underflow"<<endl;
    		return 1;
		}
		return 0;
	}
	
			void display()
		{
			node *current;
			cout<<endl<<"Display stack: ";
			current=top;
			while(current!=NULL)
			{
				cout<<current->data<<" ";
				current=current->next;
			}
		}
};
int main (){
	int n,size;
	list q1;
	list q2;
	cout << "Size of linked list: "<<endl;
	cin >> size;
	cout << "Enter elements"<<endl;
	for (int i=0;i<size;i++)
	{
		cin >> n;
		q1.push(n);
	}
	cout << "Current Queue"<<endl;
	q1.display();
	cout <<endl<< "A queue to implemented by stack it should be pushed on top of the list: ";
	cout<<endl<< "Enter a element: ";
	cin >> n;
	q2.stackqueue(q1,q2,n);
	cout<<endl<<"Queue after pushing an element"<<endl;
	q1.display();
	
}
