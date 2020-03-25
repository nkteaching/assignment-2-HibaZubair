#include<iostream>
using namespace std;
void recurr(int n,float ans)
{
	static int a=0; static double b=2.0;
	double c=0.0;
	if(a==n-1)
	{
		cout<<endl<<ans;
		return;
	}
	

	else
	{
		if(a%2!=0)
		{
			c=1/b;
			ans=ans-c;
			++a;
		    ++b;
			return recurr(n,ans);
		
		}
		else
		{
			c=1/b;
			ans=ans+c;
			++b;
			++a;
		    return recurr(n,ans);
		}
	}
		
}
int main()
{
	recurr(5,1.0);
}
