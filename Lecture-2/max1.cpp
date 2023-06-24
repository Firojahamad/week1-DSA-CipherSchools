#include<iostream>
using namespace std;
int max1(int n,int m)
{
	if(n>m)return n;
	return m;
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<max1(m,n);
}
