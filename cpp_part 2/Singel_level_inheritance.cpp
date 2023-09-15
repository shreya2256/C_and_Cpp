#include<iostream>
using namespace std;

class Account
{
	public:
		float salary=60000;
};

class Programmer : public Account //: for inheritance
{
	public:
		float bonus=5000;
};

int main()
{    
	//Account p1;
	Programmer p1;
	cout<<"Salary :"<<p1.salary<<endl;
	cout<<"Bonus :"<<p1.bonus<<endl;
	return 0;
		
}
