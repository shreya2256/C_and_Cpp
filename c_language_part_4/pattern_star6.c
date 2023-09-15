#include<stdio.h>
int pattern(int no1, int no2)
{
	int i,j,ch;
	for(i=1;i<=no1;i++)
	{
		for(j=1,ch='A';j<=no2;j++,ch++)
		{
			if(i>=j)
			{
				printf("%c",ch);
			}
		}
		printf("\n");	
	}
}

int main()
{
	int rows,col;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	printf("Enter the number of columns:");
	scanf("%d",&col);
	pattern(rows,col);
	return 0;
		
}



