#include<iostram>
using namespace std;

calss Demo
{
	private:
		int no1;
		int no2;
	public:
		Demo()
		{
			cout<<"Default Constructor\n";
			no1=0;
			no2=0;
		}
		Demo(int x,int y)
		{
			cout<<"Parameterised Constructor\n";
			no1=x;
			no2=y;	
		}
		Demo(Demo &ref)
		{
			cout<<"copy constructor\n";
			no1=ref.no1;
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
