//Scope of static object
//class object without static keyword
#include<iostream>
using namespace std;

class abc
{
	int i;
	
	public:
		
	abc()
	{
		i=0;
		cout<<"Inside constructor \n";
	}
	~abc()
	{
		cout<<"Inside destructor\n";
	}
};
int main()
{
	int x=0;
	if(x==0)
	{
		abc obj;
	}
	cout<<"End of  main";
}
