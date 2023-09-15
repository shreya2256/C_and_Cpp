#include<stdio.h>
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	//printf("\n)
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==1)||(i==iRow)||(j==1)||(j==iCol)||(i==j)) //  ||=OR; to print diagonal element condition is i==j
			
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
	int ivalue1=0,ivalue2=0;
	printf("Enter number of Rows\n");
	scanf("%d",&ivalue1);
	
	printf("Enter number of Columns \n");
	scanf("%d",&ivalue2);
	
	Pattern(ivalue1,ivalue2);
	return 0;	
}

