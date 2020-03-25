#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};node *head,*tail;
class list
{
	public:
	list()
	{
		head=NULL;
		tail=NULL;
	}
	void addnode(int n)
	{
		node *t=new node;
		t->data=n;
		t->next=NULL;
		if(head==NULL)
		{
			head=t;
			tail=t;
		}
		else
		{
			tail->next=t;
			tail=tail->next;
		}
	}
	int recur_length(node *head)
	{
		static int count=0;
		if(head==NULL)
		{
			return count;
		}
		else
		{   ++count;
			head=head->next;
			return recur_length(head);
		}
		
	}
};
int main()
{
	int value,n,i;
	list obj;
	cout<<"How many values you want to add in linked list: ";
	cin>>value;
	for(i=0;i<value;i++)
	{
		cin>>n;
		obj.addnode(n);
	}
	n=0;
	n=obj.recur_length(head);
	cout<<endl<<"Length of linked list: "<<n;
}
