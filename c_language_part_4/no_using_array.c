#include<stdio.h>
void array(int size)
{
	int i=0,a[size]; 
	printf("Enter Elements:");
	for(i=0;i<=size;i++)//i=0 ; 
	{ 
	scanf("%d",&a[i]);
	}
	printf("Number of elements are:");
	for(i=0;i<=size;i++)
	{ 
	printf("%d\n",a[i]);
	}
}
int main()
{ 
int isize=0;
printf("Enter Number of Elememts:");
scanf("%d",&isize);
array(isize);
return 0;
}
