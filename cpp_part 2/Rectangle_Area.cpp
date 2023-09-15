#include<iostream>
using namespace std;

class Rectangle
{	
	public:
	int l,b,a;
	
	void Area()
	{
		cout<<"Enter length of rectangle:";
		cin>>l;
		cout<<"Enter breadth of rectangle:";
		cin>>b;
		a=l*b;
		cout<<"Area of rectangle is:"<<a;
	}
};
int main()
{
	Rectangle r;
	r.Area();
	return 0;
}
