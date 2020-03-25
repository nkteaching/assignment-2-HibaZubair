#include <bits/stdc++.h> 
using namespace std; 
int product_recurr(int x, int y) 
{ 
   
    if (y != 0) 
        return (x + product_recurr(x, y - 1)); 
  
    else
        return 0; 
} 

int main() 
{ 
    int x,y;
	cin>>x;
	cin>>y; 
    cout << product_recurr(x, y); 
    return 0; 
} 
