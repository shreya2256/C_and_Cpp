#include<iostream>
using namespace std;
//class demo

class Hello
{
	public:
		void fun();
		void gun();
};
class Demo
{
	public:
		int i;
		private:
			int j;
			protected:
				int k;
				public:
					Demo()
					{
						i=10;
						j=20;
						k=30;
					}
					friend class Hello;					
};

void Hello::gun()
{
	Demo obj;
	cout<<obj.i<<endl;
	cout<<obj.j<<endl;
	cout<<obj.k<<endl;
}

void Hello::fun()
{   
	Demo obj;
	cout<<obj.i<<endl;
	cout<<obj.j<<endl;
	cout<<obj.k<<endl;
}

int main()
{
	Hello obj;
	obj.gun();
	return 0;
}
