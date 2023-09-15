#include<iostream>
#include<stdlib.h>
using namespace std;

class Demo
{
	public:
		int No1;
		int No2;
		Demo()
		{
			cout<<"Constructor "<<"\n";
		}
		~Demo()
		{
			cout<<"Destructor "<<"\n";
		}
		void fun(int x)
		{
			cout<<"Inside fun "<<"\n";
			cout<<x<<"\n";
		}
};

int main()
{
	Demo obj;
	Demo *p=NULL;
	//p=(Demo *)malloc(sizeof(Demo));
	//free(p);
	p=new Demo;
	cout<<p->No1<<"\n";// -> for calling pointer use arrow
	p->fun(11);
	delete p;
	return 0;	
}
// in CPP memory allocation is using "new" keyword


