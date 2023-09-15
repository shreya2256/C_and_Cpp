#include<stdio.h>
void array(int size)
{
	int i=0,a[size],min;
	printf("Enter the elements ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Minimum number:");
	for(i=0;i<size;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("%d\n",min);
}
int main()
{
	int no=0;
	printf("Enter Size of array");
	scanf("%d",&no);
	array(no);
	return 0;
}
