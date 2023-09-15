#include<stdio.h>
int main()
{
	int arr[3][5]={10,20,30,40,50,50,60,70,80,90,100,110,120,130,140,150};
	
	printf("%d\n",sizeof(arr));//3*5=15*4=60
	printf("%d\n",sizeof(arr[0]));//20
	printf("%d\n",sizeof(arr[0][0]));//4
	printf("%d\n",arr);//100
	printf("%d\n",&arr);//100
	printf("%d\n",arr+1);//120
	printf("%d\n",&arr+1);//160
	printf("%d\n",arr[0][0]);//10
	printf("%d\n",arr[2][3]);//140
	printf("%d\n",arr[1][3]);//90
	return 0;
	
}

