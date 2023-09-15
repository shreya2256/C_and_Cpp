//Display maximum number in the array
#include<stdio.h>
int main()
{
	int isize=0;
	printf("Enter the number of elements:");
	scanf("%d",&isize);
	array(isize);
	return 0;
}
void array(int size)
{ 
int i=0,a[size];
printf("Enter elements:");
for(i=0;i<=size;i++)
{
	scanf("%d",&a[i]);
}
printf("Number of elements are:");
for(i=0;i<=size;i++)
{
	printf("%d\n",a[i]);
}	
} 
