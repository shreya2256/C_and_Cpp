#include<iostream>
using namespace std;

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
					friend void fun();
};
void fun()
{
	Demo obj;
	cout<<obj.i<<endl;
	cout<<obj.j<<endl;
	cout<<obj.k<<endl;
}
int main()
{
	fun();
	cout<<"Size of object is :"<<sizeof(Demo)<<"\n";
	return 0;
}




