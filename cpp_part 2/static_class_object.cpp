//CPP program for illustrate
//class objects as static(we can us e it anywhere int his program)


#include<iostream>
using namespace std;

class abc
{
	int i=0;
	
	public:
		abc()
		{
			i = 0;
			cout<<"Inside Constructor\n";
		}
		~abc()
		{
			cout<<"Inside Destructor\n";
		}
};

int main()
{
	int x = 0;
	if(x==0)
	{
		static abc obj;
	}
	cout<<"End of main\n";
}

