 #include<iostream>
 using namespace std;
 static int a=0; 
 void cubes(int n) 
 {
 	static int b=n;
     if(a==2)
     {
     	cout<<"cube: "<<n;
     	return;
	 }
	 else
	 {
	 	n=n*b;
	 	++a;
	 	return cubes(n);
	 }
    
 }
int main()
{
	int n;
	cout<<"Enter number you want to calculate cube of: ";
	cin>>n;
	cubes(n);
}
