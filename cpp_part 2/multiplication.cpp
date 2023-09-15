#include<iostream>
using namespace std;

class Multi
{   
	public:
	int a,b,c;
	void Multiplication()
	{
		cout<<"Enter number1:";
		cin>>a;
		cout<<"Enter number2:";
		cin>>b;
		c=a*b;
		cout<<"Multiplication of two numbers is:"<<c;
	}
};
int main()
{
	Multi m;
	m.Multiplication();
	return 0;
}
