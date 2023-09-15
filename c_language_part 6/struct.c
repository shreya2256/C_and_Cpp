#include<stdio.h>
#pragma pack(1)
struct Demo
{
	int no;
	int *p;
	float f;
	
};
int main()
{
	int i=11;
	struct Demo obj1;
	obj1.no=21;
	obj1.p=&i;
	obj1.f=3.14;
	printf("%d",sizeof(obj1));
	return 0;	
}
