#include<stdio.h>
int addition();
int main()
{
	int result;
	int(*ptr)();
	ptr = &addition;
	//result=(*ptr)();
	printf("The sum is %d",(*ptr)());
}
int addition()
{
	int a,b;
	printf("Enter two number:");
	scanf("%d %d",&a,&b);
	return a+b;
}

