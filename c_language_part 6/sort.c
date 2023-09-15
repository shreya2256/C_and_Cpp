#include<stdio.h>
#include<conio.h>
struct employee
{
	int ENO;
	char name[30];
	char occup[15];
	char loca[20];
	
};
int main()
{
	struct employees temp;
	int i,j,n;
	static struct employees
	employee[]={{15,"MOHAN","PROG","DELHI"},{5,"RAM","ANAL","PUNE"},{12,"JOHN","MANA","MUMBAI"},{3,"SOHAN","PROG","NASIK"}
	};
	n=4;
	for(i=1;i<n;i++)
	{
		temp=employees[i];
		{
			for(j=i-j;j>=0&&employees[i].ENO>temp.ENO;j--)
			employees[j+1]=employees[j];
			employees[j+1]=temp;
			
		}
		for(i=0;i<n;i++)
		{
			printf("\n%d\t%7s\t%5s\t%7s",employees[i].ENO,employees[i].name,employees[i].occup,employees[i].loca);
			getch();
		}
	}
}
