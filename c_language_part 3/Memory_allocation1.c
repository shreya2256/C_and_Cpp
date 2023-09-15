#include<stdio.h>							//malloc-
#include<stdlib.h>
void Display(int Arr[],int size)
{
	int i=0;
	printf("Even Elements are :");
	for(i=0;i<size;i++)
	{
		if((Arr[i]%2)==0)
		{
			printf("%d",Arr[i]);
		}
	}
}
int main()
{
    int *arr=NULL;
	int Length=0, i=0;
	
	printf("Enter the number of elements   :");
	scanf("%d",&Length);
	
	arr=(int *)malloc(Length *sizeof(int));
	
	printf("Enter the elements :");
	for(i=0;i<Length;i++)
	{
		scanf("%d",&arr[i]);
	}
	Display(arr,Length);
	free(arr);	
}

