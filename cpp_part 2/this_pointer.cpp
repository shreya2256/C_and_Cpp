#include<iostream>
using namespace std;

class Demo
{
	public:
	int No1;
	int No2;
	Demo(int i=10, int j=20)
	{
		this->No1=i;//to show variables of class
		this->No2=j;//this==pointer in cpp mand it is not default
	}
	void Display(int x)
	{
		cout<<No1<<"\n";
		cout<<No2<<"\n";
		cout<<x<<"\n";	
	}	
};

int main()
{
	Demo obj1;
	Demo obj2(11);// The values get override according to condition
	Demo obj3(11,21);
	
	obj1.Display(51);
	obj2.Display(51);
	obj3.Display(51);
	
	return 0;	
}
