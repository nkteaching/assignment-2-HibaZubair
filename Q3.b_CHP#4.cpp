//Transfer elements from stack S1
// to stack S2
// so that the elements from S2
// are in the
//same order as on S1
//a. using one additional stack
//b. using no additional stack but only some additional nonarray variables
//stack by array
#define size 5
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
class stacks
{	
	
	int top;
    public:
    	
    	int arr[size];
		stacks()
		{
		    
			top=-1;
	     
		}
		void push(int val)
		{
			if(top==size-1)
			{
				
				cout<<endl<<"Stack overflow";
			}
			else
			{
				++top;
				arr[top]=val;
			}
		}
		int pop()
		{
			int x=-1;
			if(top==-1)
			{
				cout<<"Stack underflow"<<endl;
			}
			else
			{
				x=arr[top];
				--top;
				
			}
			return x;
			}

		
		void isEmpty()
		{
			if(top==-1)
			{
				cout<<"\nEmpty";
			}
			else
			{
				
				cout<<"\nnot empty";
			
			}
		}
		
};

int main()
{
	int i,val;
	stacks obj;
	cout<<endl<<"Enter values for stack to push"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>val;
	    obj.push(val);
    }
    
    
}
