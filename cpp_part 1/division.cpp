#include<iostream>
using namespace std;

class div
{
	public:
		int a,b,c;
		void division()
		{
			cout<<"Enter number1:";
			cin>>a;
			cout<<"Enter number2:";
			cin>>b;
			c=a/b;
			cout<<"Division is:"<<c;
		}
};
int main()
{
	div d;
	d.division();
	return 0;
}
