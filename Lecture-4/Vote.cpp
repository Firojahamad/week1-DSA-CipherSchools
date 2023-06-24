#include<iostream>
using namespace std;
void show(int age,string name)
{
	if(age>=18)
	{
		cout<<name<<":Eligible for voting"<<endl;
	}
	else
	{
		cout<<name<<":Not eligible for voting"<<endl;
	}
}
void get()
{
	int age;
	string name;
	cin>>age;
	cin>>name;
	show(age,name);
}
int main()
{
	get();
}
