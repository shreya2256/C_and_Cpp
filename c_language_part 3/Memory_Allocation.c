//Acceptt N number from user and display that number
#include<stdio.h>
#include<stdlib.h>

void Display(int arr[], int isize)    //Step 6
{
	int i=0;
	printf("Elements from the array are: \n");
	for(i=0;i<isize; i++)
	{
		printf("%d\n",arr[i]);
	}
}

int main()
{
	int *arr = NULL;    //Step 1 
	int iLength = 0, i=0;
	
	printf("Enter the number of elements\n");    //Step 2
	scanf("%d",&iLength);
	
	arr=(int*)malloc(iLength * sizeof(int));
	
	printf("Enter the elements\n");
	for(i=0;i<iLength; i++)
	{
		scanf("%d",&arr[i]);
	}
	Display(arr,iLength);
	
	free(arr);
	return 0;
	
	
}
