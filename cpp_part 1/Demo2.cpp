#include<iostream>
using namespace std;

class Demo2
{
	public:
		void display()
		{
			int i=0;
			do
			{
				cout<<i<<endl;
				i++;
			}while(i<=10);
		}	
};
int main()
{
	Demo2 d2;
	d2.display();
	return 0;
}

