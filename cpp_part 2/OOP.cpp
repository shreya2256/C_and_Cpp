#include<iostream>
using namespace std;

class Demo
{
	int no1;
	int no2;
	public:
	Demo()//if you use classname again then it is CONSTRUCTOR to initalized the values in it and for memory allocation
	{
		cout<<"Inside Constructor\n";
		no1=0;
		no2=0;
		
	}
	~Demo()//~ use for DESTRUCTOR
	{
		cout<<"Inside Destructor\n";
	}
	void fun()
	{
		cout<<"Inside Fun\n";
		
	}
	void gun()
	{
		cout<<"Inside gun\n";
	}
};

int main()
{
	Demo obj;
	obj.fun();
	obj.gun();
	return 0;	
}
