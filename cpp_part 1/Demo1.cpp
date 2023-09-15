#include<iostream>
using namespace std;

class Demo1
{
	public:
		void display()
		{
			int i=0;
			while(i<=10)
			{
				cout<<i<<endl;
				i++;
			}
		}
};
int main()
{
	Demo1 d1;
	d1.display();
	return 0;
}
