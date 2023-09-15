//Write a programe to display and even number
#include<stdio.h>
int array(int size)
{
	int i=0,a[size],count=0;
	printf("Enter Elements :");
	for(i=0;i<=size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("Even elements are:");
	for(i=0;i<=size;i++)
	{
		if((a[i]%2)==0)
		{
			printf("%d\n",a[i]);
			count++;
		}
	}
	printf("count of even numbers is:%d",count);
	return count;
}
int main()
{
	int isize=0;
	printf("Enter number of elements:");
	scanf("%d",&isize);
	array(isize);
	return 0;
}
