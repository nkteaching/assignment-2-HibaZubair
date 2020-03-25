//check
#include<iostream>
#include<sstream>
using namespace std;

string rec (int n)
{
	if (n<=1000)
	{
		string s2;
		return s2;
	}
	else {
		int c;
		c=n%1000;
		stringstream sss;
  		sss<<c;
  		string s2;
  		sss>>s2;
  		
  		return rec(n/1000)+","+s2 ;
	}
}
int main ()
{
	string c=rec (1234567890);
	cout << c;
}
