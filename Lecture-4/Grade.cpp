#include<iostream>
using namespace std;

void show(int mark[])
{   cout<<"marks"<<"    "<<"Grade"<<endl; 
	for(int i=0;i<5;i++)
	{
		if(mark[i]>91&&mark[i]<100)
		cout<<mark[i]<<"   "<<"AA"<<endl;
		else if(mark[i]>81&&mark[i]<90)
		cout<<mark[i]<<"   "<<"AB"<<endl;
		else if(mark[i]>71&&mark[i]<80)
		cout<<mark[i]<<"   "<<"BB"<<endl;
		else if(mark[i]>61&&mark[i]<70)
		cout<<mark[i]<<"   "<<"BC"<<endl;
		else if(mark[i]>51&&mark[i]<60)
		cout<<mark[i]<<"   "<<"CD"<<endl;
		else if(mark[i]>41&&mark[i]<50)
		cout<<mark[i]<<"   "<<"DD"<<endl;
		else
		cout<<mark[i]<<"   "<<"Fail"<<endl;
	}
}
void get()
{
	int marks[5];
	for(int i=0;i<5;i++)
	{
		cin>>marks[i];
		
	}
	show(marks);
}
int main()
{
	get();
}
