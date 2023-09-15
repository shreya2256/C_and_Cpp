#include<stdio.h>

void Timetable(int n)
{
	if(n==1)
	{
		printf("Exam Time :11 Am");
	}
	else if(n==2)
	{
		printf("Exam Time:2 noon");
	}
    else if(n==3)
    {
    	printf("Exam Time:1Pm");
	}
	else
	{
		printf("Enter correct std");
	}
}

int main()
{
	int std;
	printf("Enter your std:");
	scanf("%d",&std);
	Timetable(std);
	return 0;
}

