#include<iostream>
using namespace std;

class Demo
{
	public:
		void display()
		{
			int i=0;
			for(i=1;i<=10;i++)
			{
				cout<<i<<endl;
			}
		}
};
int main()
{
	Demo d;
	d.display();
	return 0;
}

