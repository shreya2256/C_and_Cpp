#include<stdio.h>
void main()
{
	int a=10;
	int *p;
	int **q;
	p=&a;
	q=&p;
    
	printf("Address of a:%d\n",p);
	printf("Addresss of p:%d\n",q);
	printf("Value Stored at p:%d\n",*p);
	printf("Value Stored at q:%d\n",**q);
	return 0;
		
}

