#include<iostream>
using namespace std;
int sum(int p,int q=0)
{
	return p+q;
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<sum(m,n);
}
