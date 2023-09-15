
//refernce= derived data type, to change name of variable
#include<iostream>
using namespace std;
int main()
{
	int no=11;
	int *p=&no;
	int value=21;
	int &x=value;//here & means reference not for address
	cout<<value<<"\n";
	cout<<x<<"\n";
	
	cout<<&value<<"\n";
	cout<<&x<<"\n";
	return 0;

}
