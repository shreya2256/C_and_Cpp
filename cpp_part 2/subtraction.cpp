#include<iostream>
using namespace std;

class Sub
{
	public:
		int a,b,c;
		void Subtraction()
		{
			cout<<"Enter number1:";
			cin>>a;
			cout<<"Enter number2";
			cin>>b;
			c=a-b;
			cout<<"Subtraction is:"<<c;	
		}
};
int main()
{
	Sub s;
	s.Subtraction();
	return 0;
}
