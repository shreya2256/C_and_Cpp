//program for demonstrate grades of students 
#include<stdio.h>
void Grade(int m)
{
	if((m>85)&&(m<=100))
	{
		printf("Students will get A+ grade");
	}
	else if((m>65)&&(m<=85))
	{
		printf("Students will get B+ grade");
	}
	else if((m>35)&&(m<=65))
	{
		printf("Students will get C+ grade");
	}
	else
	{
		printf("Students will Fail in exam");
	}
}
int main()
{   
    int marks=0;
	printf("Enter marks:");
	scanf("%d",&marks);
	Grade(marks);
	return 0;
}
