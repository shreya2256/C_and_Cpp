#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	printf("%d\n",sizeof(arr));
	printf("%d\n",sizeof(arr[0]));
	printf("%d\n",sizeof(arr[1]));
	
	printf("%d\n",arr);
	printf("%d\n",&arr);
	printf("%d\n",arr+1);
	printf("%d\n",&arr+1);
	printf("%d\n",arr[0]);//10
	printf("%d\n",arr[3]);//40
	
	return 0;
	
}
