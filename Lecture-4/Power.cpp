#include<iostream>
using namespace std;
int power(int n,int base)
{
	if(base==0)
	return 1;
	return n*power(n,base-1);
}
int main()
{
	int n,base;
	cin>>n>>base;
	cout<<power(n,base);
}
