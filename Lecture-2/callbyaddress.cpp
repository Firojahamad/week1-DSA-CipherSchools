#include<iostream>
using namespace std;
int sum(int *a,int *b)//call by address;
{
	int k=(*a+*b);
	return k;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<sum(&a,&b);
}
