#include<stdio.h>
void array(int size)
{ 
int i=0,a[size];
printf("Enter elements:");
for(i=0;i<=size;i++)
{ 
scanf("%d",&a[i]);
}
printf("Even numbers are:");
for(i=0;i<=size;i++)
{
	if((a[i]%2)==0)
	{
		printf("%d\n",a[i]);
	}	
}
}
int main()
{
	int isize=0;
	printf("Enter number of elements:");
	scanf("%d",&isize);
	array(isize);
	return 0;	
}

