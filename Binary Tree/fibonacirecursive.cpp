#include<iostream>
using namespace std;
int fib(int n)
{
	if(n==0 || n==1)
	{
		return n;
	}
	int fibn_1=fib(n-1);
	int fibn_2=fib(n-2);
	 return fibn_1+fibn_2;
}
int main()
{
	cout<<"enter the number   ";
	int n;
	cin>>n;
	cout<<fib(n);
}
