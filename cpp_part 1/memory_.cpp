#include<stdio.h>
#include<stdlib.h>
int FirstOccurance(int Arr[],int size,int no)
{
	int i=0; count=0;
	if((Arr=NULL)||(size<=0))
	{
		return 0;
		
	}
	for(i=0;i<size;i++)
	{
		if(Arr[i]==no)
		{
			break;
		}
	}
	if(i==size)
	{
		return -1;
	}
	else{
		return i;
	}
	return i;   
	//printf("Index of given number is:%d",i)
}
int main()
{
	int *arr = NULL;
	int length=0, i=0, Result =0, no=0;
	
	printf("Enter the no of elements :");
	scanf("%d",&length);
	
	arr=(int*)malloc(length*sizeof(int));
	if(arr==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
}
