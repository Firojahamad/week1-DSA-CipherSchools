#include<iostream>
using namespace std;
int main()
{
	int n=10;
	int *a=&n;
	cout<<a<<endl;
	cout<<*a<<endl;
	cout<<*(&n)<<endl;
}
