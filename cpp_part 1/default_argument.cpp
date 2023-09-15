#include<iostream>
using namespace std;

class Demo
{
	public:
		float Area(float fRadius,float fpi=3.14)//default argument when we give value at parenthesis (bracket)
		{
			float Ans=0.0;
			Ans=fpi*fRadius*fRadius;
			return Ans;
		}
};
int main()
{
	float value1=0.0, value2=0.0, ret=0.0;
	cout<<"Enter radius value :";
	cin>>value1;
	
	cout<<"Enter value of PI :";
	cin>>value2;
	
	Demo obj;
	ret=obj.Area(value1,value2);
	cout<<"Area of Circle is:"<<ret<<"\n";
	
	ret=obj.Area(value1);
	cout<<"Area of Circle is:"<<ret<<"\n";
	cout<<"size of object is:"<<sizeof(obj)<<"\n";
	return 0;
}
