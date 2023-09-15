#include<iostream>
using namespace std;
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
					friend void Hello::fun();//:: for membership
					friend void Hello::gun();
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
	obj.fun();
	//obj.gun();
	cout<<"size of object is :"<<sizeof(Demo)<<"\n";
	return 0;
}
