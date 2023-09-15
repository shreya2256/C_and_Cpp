#include<stdio.h>
int main()
{
	int a;
	printf("Enter number:");
	scanf("%d",&a);
	display(a);
	return 0;
}
void display(int n)
{
	int i=1;
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=n);
}


