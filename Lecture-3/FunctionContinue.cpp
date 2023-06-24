#include<iostream>
using namespace std;
void show(int r,string n)
{
	cout<<"Roll:"<<r<<endl;
	cout<<"Name:"<<n<<endl;
	
}
void get()
{
	int roll;
	string name;
	cout<<"Enter the roll & name"<<endl;
	cin>>roll>>name;
	show(roll,name);
}
int main()
{
	get();
}
