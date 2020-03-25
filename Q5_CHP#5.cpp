//Write a recursive method that for a positive integer n prints odd numbers
//a. between 1 and n
//b. between n and 1
#include<iostream>
using namespace std;
void recur_odd1(int n,int a)
{
	
	if(a==n)
	{
		return;
	}
	else
	{
		if(a%2!=0)
		{
			cout<<a<<" ";
			return recur_odd1(n,a+1);
		}
		else 
		{
			return recur_odd1(n,a+1);
		}
	}
}

void recur_odd2(int n)
{
	if(n==0)
	{
		return;
	}
	else
	{
		if(n%2!=0)
		{
			cout<<n<<" ";
			return recur_odd2(n-1);
		}
		else 
		{
			return recur_odd2(n-1);
		}
	}
}
int main()
{
	int n,a=1;
	cout<<"Print odd numbers(enter n): ";
	cin>>n;
	cout<<endl<<"Part (a)between 1 and n:"<<endl;
	recur_odd1(n,a);
	cout<<endl<<endl<<"Part (b)between n and 1:"<<endl;
	recur_odd2(n);
}

