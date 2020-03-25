#include<iostream>
using namespace std;
void nonTail(int i) {
 if (i > 0) {
 nonTail(i-1);
 cout << i <<" ";
 nonTail(i-1);
 }
	 }
	 int main()
	 {
	 	nonTail(3);
	 }
