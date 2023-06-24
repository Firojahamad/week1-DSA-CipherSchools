#include<iostream>
using namespace std;
int multi(int m,int n)//call by value;
{//formal parameter
	return m*n;
}
int increment(int &k)//call by refrence;
{
	return ++k;
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<multi(m,n)<<endl;//actual parameter
	cout<<increment(n)<<endl;
	cout<<n;
	
}
