#include<stdio.h>
int main()
{
	int a=10,b=20;;
	printf("Numbers Before Swapping: %d,%d\n",a,b);
	a=a+b;  //a=10+20=30
	b=a-b;  //b=30-20=10
	a=a-b;  //a=30-10=20
	
	printf("Numbers After Swapping: %d,%d",a,b);
	return 0;
}

