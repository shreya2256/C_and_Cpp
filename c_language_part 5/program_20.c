//write a program display sum of given numbers in an array
#include<stdio.h>
int array(int size)
{
	int i=0,a[size],count=0,sum=0;
	printf("Enter elements:");  //size of array=4
	for(i=0;i<=size;i++)       //i=0; 0<=4; 0+1=1
							   //i=1; 1<=4; 1+1=2
							   //i=2; 2<=4; 2+1=3
							   //i=3; 3<=4; 3+1=4
							   //i=4; 4<=4; 4+1=5
							   //i=5; 5<=4; 
							   	
	{
		scanf("%d",&a[i]);     //&a[0]=30
							   //&a[1]=46
							   //&a[2]=45
							   //&a[3]=98
							   //&a[4]=51
							   		             		   
	}
	for(i=0;i<=size;i++)       //i=0; 0<=4; 0+1=1
							   //i=1; 1<=4; 1+1=2
							   //i=2; 2<=4; 2+1=3
							   //i=3; 3<=4; 3+1=4
							   //i=4; 4<=4; 4+1=5
							   //i=5; 5<=4;  
	{                    //a[0]=30+a[1]=46+a[2]=45+a[3]=98+a[4]=51
		sum=sum+a[i];   //30+46+45+98+51
		                // 270
	}
	printf("Sum of given numbers are:%d",sum);//270
	return sum;	
}
int main()
{
	int isize=0;
	printf("Enter number of elements:");
	scanf("%d",&isize);
	array(isize);
	return 0;
}

