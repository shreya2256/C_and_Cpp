#include<iostream>
using namespace std;

class c
{
	public:
		void set_data()
		{
			cout<<"Inside C set data\n ";
		}
		void get_data()
		{
			cout<<"Inside C get data\n ";
		}
};
class cpp:public c
{
	public:
//		void set_data()
//		{
//			cout<<"Inside cpp set data\n";
//		}
		void get_data()
		{
			cout<<"Inside cpp get data\n";
		}
		void set_data(int a)
		{
			cout<<"Inside cpp set data\n:"<<a;
		}
};
int main()
{
	cpp obj;
	//obj.set_data();
	obj.get_data();
	obj.set_data(12);
	return 0;
}
