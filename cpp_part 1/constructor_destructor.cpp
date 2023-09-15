#include<iostream>
using namespace std;

class Demo
{
	private:
		int no1;
		int no2;
	public:
		Demo()//constructor
		{
			cout<<"Default Constructor\n";
			no1=0;
			no2=0;
		}
		Demo(int x,int y)//prameterised constructor
		{
			cout<<"Parameterised Constructor\n";
			no1=x;
			no2=y;	
		}
		Demo(Demo &ref)//to make copy the constructor
		{
			cout<<"copy constructor\n";
			no1=ref.no1;//reference to change variable
			no2=ref.no2;
		}
		~Demo()
		{
			cout<<"Destructor\n";
			
		}
};

int main()
{
	Demo obj1;
	Demo obj2(10,20);
	Demo obj3(obj2);
	
	return 0;
}
