//part b for sentence
#include<iostream>
using namespace std;
#define size 13
	static int aa=0;
class list
{	
	
	int top;
    public:
    	
    	char arr[size];
		list()
		{
		
			top=-1;
	     
		}
		void push(int val)
		{
			static int count=0;
			if(top==size-1)
			{
				
				cout<<endl<<"Stack overflow";
			}
			else
			{
				++top;
				arr[top]=val;
				++count;	
			}
	if(count==11)
{	int ans;	
	ans=palindromes(arr,0,aa-1);


	if (ans==1)
	{
		cout << "Palindrome\n";
	}
	else {
		cout << "Not Palindrome\n";
	}
	}	}
		
void pushh(char *exp)
{

	int i;
	char x;	
	
	for(i=0;exp[i]!='\0';i++)
	{
			
		if(exp[i]==char(44)|| exp[i]==char(39) || exp[i]==char(32) )
		{
		}
		else
		{
			++aa;
			x=exp[i];
			push(x);
		}
		
	}
	
}
int palindromes(char *arr,int a,int b)
{
	
	if (arr[a] != arr[b])
	{
	return 0;
	} 

    if (a<b+1) 
    {
    	return palindromes(arr,a+1,b-1);
	} 
  
    else 
	{
	    return 1;
    }
}};
int main (){
	list obj;
	int i,ans;	
	char pal[size];
	cout << "Enter String\n";
	for (i=0;i<size;i++)
	{
		cin >> *(pal+i);
	}
	
    obj.pushh(pal);

	
}
