#include<stdio.h>
void even(int n)

{
	int i=1;
	while(i<=10)
	{
		if(i%2==0)
		{
			printf("%d",i);
			i++;
		}	
	}
}
int main()
{
	int no=0;
	printf("Enter the number:");
	scanf("%d",&no);
	even(no);
	return 0;
}

