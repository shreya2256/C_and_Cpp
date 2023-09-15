//Bit field
#include<stdio.h>
struct time
{
	unsigned int hours:5;  //unsigned for modification
	unsigned int minutes:6;
	unsigned int seconds:6;
};
int main()
{
	struct time t;
	
	int hours =0, minutes=0,  seconds=0;
	
	printf("Enter hrs :");
	scanf("%d",&hours);
	
	printf("Enter minutes :");
	scanf("%d", &minutes);
	
	printf("Enter seconds :");
	scanf("%d", &seconds);
	
	printf("Time is %d: %d: %d:\n",hours, minutes, seconds);
	printf("THe size of time is %d bytes",sizeof(struct time));
	
	return 0;
	
}

