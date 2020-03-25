//part a for word
#include<iostream>
using namespace std;
bool palindromes(char arr[],int a,int b)
{
	if (arr[a] != arr[b]) 
    {return false;
	 } 

    if (a<b+1) 
    {
    	return palindromes(arr,a+1,b-1);
	} 
  
    else 
	{
	return true;
    }
}
int main (){
	int size,i,ans;
	cout << "Size of string"<<endl;
	cin >> size;
	char pal[size];
	cout << "Enter String\n";
	for (i=0;i<size;i++)
	{
		cin >> *(pal+i);
	}
	ans=palindromes(pal,0,size-1);
	if (ans==1)
	{
		cout << "Palindrome\n";
	}
	else {
		cout << "Not Palindrome\n";
	}
}
