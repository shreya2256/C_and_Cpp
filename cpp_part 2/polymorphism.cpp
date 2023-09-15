//	polymorpism=many forms
#include<iostream>
using namespace std;

class Demo
{
	public:
		int Addition(int no1, int no2)
		{
			return no1+no2;
		}
		int Addition(int no1, int no2, int no3)
		{
			return no1+no2+no3;
		}
		int Addition(int no1, int no2, int no3, int no4)
		{
			return no1+no2+no3+no4;
		}
};

int main()
{
	Demo obj;
	int result=0;
	result=obj.Addition(10,20);
	cout<<result<<"\n";
	
	result=obj.Addition(10,20,30);
	cout<<result<<"\n";
	
	result=obj.Addition(10,20,30,40);
	cout<<result;
	
	return 0;
}
