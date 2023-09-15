#include<stdio.h>
void main()
{
	int arr[5]={1,2,3,4,5};
	int *p= arr;
	int i;
	printf("Printing array elements \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(p+i)); 
	}
	return 0;
}
//*(p+i)
//*(p+0*4)
//*(p+0)
//*(100)

