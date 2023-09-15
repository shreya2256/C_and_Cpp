#include<stdio.h>
#include<stdlib.h>
int DisplaySum(int Arr[],int size)
{
	int i=0,sum=0;
	for(i=0;i<size;i++)
	{
		if((Arr[i]%2)==0)
		{
			sum=sum+Arr[i];
			//printf("%d\n",sum);
		}
	}
	return sum;
}
int main()
{
	int *arr=NULL;
	int length=0, i=0, Result=0;
	printf("Enter the no of elements: ");
	scanf("%d",&length);
	
	arr=(int *)malloc(length*sizeof(int));
	
	printf("Enter the elements :");
	for(i=0;i<length;i++)
	{
		scanf("%d",&arr[i]);
	}
	Result=DisplaySum(arr,length);
	printf("The Sum of Elements is:%d",Result);
    free(arr);	
	return 0;
	
}
