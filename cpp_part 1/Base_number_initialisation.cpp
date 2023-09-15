#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		Base(int p, int q)
		{
			cout<<"Base constructor\n";
			x=p;
			y=q;
		}
};

class derived:public Base
{
	public:
		int a,b;
		Derived(int i, int j, int k, int l):Base(k,l)
		{
			cout<<"Derived constructtor \n";
			a=i;
			b=j;
		}
};
int main()
{
	Derived dobj(10,20,30,40);
	cout<<dobj.x<<"\n";
	cout<<dobj.y<<"\n";
	cout<<dobj.a<<"\n";
	cout<<dobj.b<<"\n";
	return 0;
}
