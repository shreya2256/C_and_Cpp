#include<stdio.h>
void array(int size)
{
	int i=0,a[size],max=0;
	printf("Enter the elements in the array:");
	//scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Maximum number:");
	for(i=1;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("%d\n",max);	
}

int main()
{
	int isize=0;
	printf("Enter the size of an array:");
	scanf("%d",&isize);
	array(isize);
	return 0;
}
