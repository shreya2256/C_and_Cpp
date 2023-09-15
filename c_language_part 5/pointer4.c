#include<stdio.h>
int main()
{
	int number = 50;
	int*p;
	p = &number;
	printf("Address of p variable is %d\n",p);
	
	p=p-1;
	printf("After decrement Address of p variable is %d\n",p);
	return 0;
	
}

