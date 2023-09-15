#include<stdio.h>
void even(int n)
{
	int i=1;
	do
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
		i++;
	}while(i<=10);	
}
int main()
{
	int no=0;
	printf("Enter no:");
	scanf("%d",&no);
	even(n0);
	return 0;
}

