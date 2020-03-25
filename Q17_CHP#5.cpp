#include<iostream>
using namespace std;
string newtext;
void check_occur(string text,char c,int count)
{
	static int i=0;

	if(i!=text.length())
	{
		if((text[i]==c))
			{++i;
			++count;
			return 	check_occur(text,c,count);}
		else
		{
			++i;
			return 	check_occur(text,c,count);
		}
	}
	else
	{
		if(count>0)
	{
		cout<<endl<<"The character exists in the sentence";
		cout<<endl<<"The frequency of the character is: "<<count;
		return ;
	}
	else
	{
	cout<<endl<<"The character does not exist in the sentence";
		return ;
	}
    }
}
void delete_occur(string text,char c)
{
	static int j=0,k=0;
	cout<<endl;
	if(k!=text.length())
	{
		if(text[k]!=c)
		{
			newtext[j]=text[k];
			++k;
			++j;
			delete_occur(text,c);
		}
		else
		{
			++k;
			delete_occur(text,c);
		}
	}
	else
	{
		
	for(int l=0;l<j;l++)
	    {
		cout<<newtext[l];
    	}	
    }
}
int main()
{
	string text;
	int count=0;
	char c;
	cout<<"Enter a string: ";
	cin>>text;
	cout<<endl<<"Enter character you want to check for occurence: ";
	cin>>c;
	check_occur(text,c,count);
	delete_occur(text,c);
}
