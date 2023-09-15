#include<stdio.h>
void odd(int n)
{
	int i=1;
	do
	{
		if(i%2!=0)
		{
			printf("%d",i);
		}
		i++;
	}while(i<=10);
}
int  main()
{   
    int no;
	printf("Enter number:%d",no);
	//scanf("%d",&no);
	odd(no);
	return 0;
}

