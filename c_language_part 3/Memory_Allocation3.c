#include<stdio.h>
#include<stdlib.h>
int Display(int Arr[],int size,int Value)
{
	int i=0,count=0;
	for(i=0;i<size,i++)
	{
		if(Arr[i]==value)
		{
			count++;
		}
	}
	return count;
}
int main()
{
   int *arr=NULL;
	int length=0, i=0, Result=0, no=0;
	printf("Enter the elements that you want to search: ");
	scanf("%d",&length);
	
	arr=(int *)malloc(length*sizeof(int));
	
	printf("Enter the elements :");
	for(i=0;i<length;i++)
	{
		scanf("%d",&arr[i]);
	}
	Result=Display(arr,length,no);
	printf("Freequency is:%d",Result);
    free(arr);	
	return 0;	
}
