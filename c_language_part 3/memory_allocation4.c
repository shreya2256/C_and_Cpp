#include<stdio.h>
#include<stdlib.h>
int FirstOccurance(int Arr[],int size,int no)
{
	int i=0,count=0;
	//if((Arr=NULL)||(size<=0))
   //	{
   //		return 0;
		
  //	}
	for(i=0;i<size;i++)  		//no of elements=4
								//i=0;0<4;0+1=1
								//i=1;1<4;1+1=2
								//i=2;2<4;2+1=3
								//i=3;3<4;3+1=4
								//i=4;4<4
	{						   // number to be search=55
		if(Arr[i]==no)        //Arr[0]!=55
							  //Arr[1]1=55
							  //Arr[2]==55
		{
			break;            //break the loop
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
	
	printf("Enter the no of elements :");     //4
	scanf("%d",&length);
	
	arr=(int*)malloc(length*sizeof(int));
	if(arr==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	printf("Enter the elments:");        //23
										//34
										//55
										//98
	for(i=0;i<length;i++)               //no of elements=4
										//i=0;0<4;0+1=1
										//i=1;1<4;1+1=2
										//i=2;2<4;2+1=3
										//i=3;3<4;3+1=4
										//i=4;4<4
	{
		scanf("%d",&arr[i]);	
	}
	printf("Enter the elements that you want to search :");//55
	
	scanf("%d",&no);
	
	Result=FirstOccurance(arr,length,no);
	printf("Index is:%d",Result); //2
	
	free(arr);
	return 0;	
}
