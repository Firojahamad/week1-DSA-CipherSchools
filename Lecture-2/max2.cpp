#include<iostream>
using namespace std;
int max1(int n,int m)
{
	if(n>m)return n;
	return m;
}
int max2(int n,int m,int p)
{
	if(n>m)return n;
	return m;
	else
	{
	if(m>p)return m;
	return p;
}
}
int main()
{
	int m,n,p;
	cin>>m>>n>>p;
	cout<<max1(m,n);
	cout<<endl<<max2(m,n,p);
}
