#include<stdio.h>
int main()
{
	int a=10,b=20,temp;
	printf(" Numbers Before Swapping :%d,%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	
	printf("Numbers After Swapping: %d,%d",a,b);
	return 0;
	
}


