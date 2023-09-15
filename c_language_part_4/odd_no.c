#include<stdio.h>
void odd(int n)
{
	int i;
	for(i=0;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}
}
int  main()
{
    int no=0;
	printf("Enter no:");
	scanf("%d",&no);
	odd(no);
	return 0;	
}

