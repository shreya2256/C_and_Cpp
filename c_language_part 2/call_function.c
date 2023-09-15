#include<stdio.h>
void display(int n)//function defination
{
	int i=0;
	for(i=1; i<=n; i++)
	
	{
	  printf("%d\n",i);
	}
}
int main()
{
	
	int no=0;
	printf("Enter no:");
	scanf("%d",&no);
	display(no);//Function calling
	return 0;
}

