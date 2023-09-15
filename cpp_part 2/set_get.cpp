#include<iostream>
using namespace std;
//set data
//get data
class encapsulation
{
	public:
		string name,city;
		int roll_no,id;
		void set_data()
		{
		
		cout<<"Enter your name :";
		cin>>name;
		cout<<"Enter your roll no :";
		cin>>roll_no;
		cout<<"Enter your id :";
		cin>>id;
		cout<<"Enter your city name :";
		cin>>city;	
	   }
	void get_data()
	{
		cout<<"Your name is: " <<name<<"\n"<<endl;
		cout<<"Your roll_no is : " <<roll_no<<"\n"<<endl;
		cout<<"Your id is : "<<id<<"\n"<<endl;
		cout<<"Your City name is : " <<city<<"\n"<<endl;
	}	
};

int main()
{
	encapsulation obj;
	obj.set_data();
	obj.get_data();
	return 0;
	
}

