#include<iostream>
using namespace std;

class Demo
{
	private:
		int No1;
		int No2;
		public:
			Demo()
			{
				cout<<"Default constructor"<<"\n";
				No1=0;
				No2=0;
			}
			Demo(int x,int y)
			{
				cout<<"Parameterised constructor"<<"\n";
				No1=x;
				No2=y;
			}
			Demo(Demo &obj3)
			{
				cout<<"Copy constructor"<<"\n";
				No1=obj3.No1;
				No2=obj3.No2;
			}
			~Demo()
			{
				cout<<"Destructor"<<"\n";
			}
			int getNo1()
			{
				return No1;
				
			}
			int getNo2()
			{
				return No2;
			}
};

int main()
{
	Demo obj1;
	cout<<"Constructor :"<<obj1.getNo1()<<"\t"<<obj1.getNo2()<<"\n";
	Demo obj2(10,20);
	cout<<"Parameterised Constructor :"<<obj2.getNo1()<<"\t"<<obj2.getNo2()<<"\n";
	Demo obj3(obj2);
	cout<<"Copy Constructor :"<<obj3.getNo1()<<"\t"<<obj3.getNo2()<<"\n";
	
	return 0;
}
