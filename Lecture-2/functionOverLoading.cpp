#include<iostream>
using namespace std;
int sum(int a,int b)
{
	return a+b;
}
int sum(int a)
{
	return ++a;
}
int main()
{
	int n,m;
	cin>>n>>m;
	int k=sum(sum(n,m));
	cout<<k;
	
}
