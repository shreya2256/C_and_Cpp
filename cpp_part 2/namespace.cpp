#include<iostream>
using namespace std;
namespace A
{
	int x=5;
	void printX()
	{
		cout<<x<<endl;
	}
}
namespace B
{
	int x=10;
	void printX()
	{
		cout<<x<<endl;
	}
}

int main()
{
	A::printX();//:: scope reolution or memebership operator
	B::printX();
	
	return 0;
}
