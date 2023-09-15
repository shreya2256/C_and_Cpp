#include<stdio.h>
#include<stdlib.h>
int maximum(int arr[],int size)
{
	int i=0,count =0, max=0;
	max=arr[0];
	if((arr==NULL)||(size<=0))
	{
		return 0;

	}
	for(i-0;i<=size;i++)				//i=0;0<=4;0+1
										//i=1;1<=4;1+1=2
										//i=2;2<=4;2+1=3
										//i=3;3<=4;3+1=4
										//i=4;4<=4;4+1=5
										//i=5;5<=4
	{
		if(arr[i]>max)               //arr[0]=1;1>5  (max=5)
									//arr[1]=2;2>5
									//arr[2]=3;3>5
									//arr[3]=4;4>5
									//arr[4]=5;5>5
									
		{
			max=arr[i];             //max=arr[4]
		}
	}
	return max;
}
int main()
{
	int *arr=NULL;
	int length=0,i=0,result=0,no=0;
	printf("Enter the number of elements :");   //4
	scanf("%d",&length);
	
	arr=(int *)malloc(length*sizeof(int));
	printf("Enter the number of elements:");   //1
												//2
												//3
												//4
										//length=4
	for(i=0;i<=length;i++)          	//i=0;0<=4;0+1=1
										//i=1;1<=4;1+1=2
										//i=2;2<=4;2+1=3
										//i=3;3<=4;3+1=4
										//i=4;4<=4;4+1=5
										//i=5;5<=4
	{
		scanf("%d",&arr[i]);
	}
	result=maximum(arr,length);
	printf("Maximum number is:%d",result);  //5
	free(arr);
	return 0;
	
	
}
