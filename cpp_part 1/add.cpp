#include<iostream>
using namespace std;

class Add
{
	public:
		int a,b,c;
		void addition()
		{
			cout<<"Enter number1:";
			cin>>a;
			cout<<"Enter number2:";
			cin>>b;
			c=a+b;
			cout<<"Addition of two numbers is:"<<c;
		}		
};
int main()
{
	Add a;
	a.addition();
	return 0;
}
