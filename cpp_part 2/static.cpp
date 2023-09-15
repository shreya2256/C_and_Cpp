//Static==Keyword, we can use anywhere in this program
#include<iostream>
using namespace std;

class Demo
{
	public:
		int x, y, z;				//Instance member of variable
		static int no;				//Static member of variable
		void fun()
		{
			cout<<"Inside not static fun\n";
		}
		
		static void gun()
		{
			cout<<"Inside static gun\n";
		}
		Demo(int a=10, int b=20, int c=30)
		{
			this->x=a;
			this->y=b;
			this->z=c;
		}
};

int Demo::no=51; //membership variable ;   here static variable is also initialsed
				//static variables always call with using classname
int main()
{
	cout<<"Value of no : "<<Demo::no<<"\n";
	Demo::gun();
	Demo obj1(1,2,3);
	Demo obj2(11,22,33);
	obj1.fun();
	cout<<"size of object is :"<<sizeof(obj1)<<"\n";
	cout<<"size of object is :"<<sizeof(obj1)<<"\n";
	cout<<"size of object is :"<<sizeof(Demo)<<"\n";
	return 0;
	
}
