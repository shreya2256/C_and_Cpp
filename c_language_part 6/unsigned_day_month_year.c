
#include<stdio.h>
struct Date
{
	unsigned int Day:5;  //unsigned for modification
	unsigned int Month:4;
	unsigned int  Year:15;
};
int main()
{
	struct time t;
	
	int Day=0, Month =0, Year=0;
	
	printf("Enter Day:");
	scanf("%d",&Day);
	
	printf("Enter Month :");
	scanf("%d", &Month);
	
	printf("Enter Year :");
	scanf("%d", &Year);
	
	printf("Time is %d: %d: %d:\n",Day,Month,Year);
	printf("THe size of time is %d bytes",sizeof(struct Date));
	
	return 0;
	
}





