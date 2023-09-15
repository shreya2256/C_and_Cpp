#include<stdio.h>
#pragma pack(1)
struct Hello
{
int i;
float d;	
};
struct Demo
{
	int x;
	int y;
	struct Hello hobj;
 };
 int main()
 {
 	struct Demo obj;
 	obj.x=11;
 	obj.y=12;
 	obj.hobj.i=23;
 	obj.hobj.d=25;
 	printf("%d",sizeof(obj));
 	return 0;
 	
 }
 
