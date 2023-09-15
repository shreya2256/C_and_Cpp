#include<stdio.h>
//%u= is used for unsigned int  
//input=43
//output=110101
void DisplayBinary(unsigned int iNo)
{
	unsigned int iDigit = 0;
	while(iNo > 0)
	{
		iDigit = iNo % 2;
		printf("%u\t",iDigit);
		iNo = iNo/2;
	}
}
int main()
{
	unsigned int ivalue = 0;
	printf("Enter number\n");
	scanf("%u",&ivalue);
	
	DisplayBinary(ivalue);
	return 0;
}


