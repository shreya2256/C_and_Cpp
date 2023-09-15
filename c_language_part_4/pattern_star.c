#include<stdio.h>
void display(int row,int col)
{									//output
	int i,j;						//***
	for(i=1;i<=row;i++)				// **
	{								//  *
		for(j=1;j<=col;j++)
		{
			if(j>=i)
			{
				printf("*");
			}
			else
			{
			   printf(" ");
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
