#include<stdio.h>
#pragma pack(1)

struct Demo
{
	int x;
	float f;
	double d;
}dobj;

union hello
{
	int x;
	float f;
	double d;
}hobj;

int main()
{
	dobj.x=11;
	dobj.f=3.14;
	dobj.d=5.10;
	
	hobj.x=11;
	hobj.f=3.14;
	hobj.d=5.10;
	
	printf("%d\n",sizeof(hobj));
	printf("%d\n",sizeof(dobj));
	
	return 0;
}
