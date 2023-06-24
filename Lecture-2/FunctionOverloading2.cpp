#include<iostream>
using namespace std;
int sum(int n,int m)
{
	return m+n;
}
float sum(float m,float n)
{
	return m+n;
}
int main()
{
	int m,n;
	float l,k;
	cout<<"Enter the int value"<<endl;
	cin>>m>>n;
	cout<<"Enter the float value"<<endl;
	cin>>l>>k;
	cout<<"function-1:"<<sum(m,n)<<endl;
	cout<<"function-2:"<<sum(l,k)<<endl;
}
