#include<stdio.h>
int add()   //Function Defination
{
	int a,b,c;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("Addition is:%d",c);
}
int main()
{
	add();   //Calling to function
	return 0;
}


