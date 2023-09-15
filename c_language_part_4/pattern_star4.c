#include<stdio.h>
void display(int row,int col)
{									
	int i=0,j=0;
	if(row!=col)
	{
		return;
	}						
	for(i=1;i<=row;i++)				
	{								
		for(j=col;j>=1;j--)
		{
			if(j>=i)
			{
				printf("\t");
			}
			else
			{
			   printf("*\t");
			}
		}
		printf("\n");
	}
}
int main()
{
	int no1=0,no2=0;
	printf("Enter number of row:");
	scanf("%d",&no1);
	printf("Enter the number of column:");
	scanf("%d",&no2);
	display(no1,no2);
	return 0;
}
