#include<stdio.h>
#include<math.h>
int ConvertDecimal(int iNo)
{
	int i=0, b=0;
	while(iNo)
	{
		b= b+pow(2,i)*(iNo % 10);
		iNo = iNo / 10;
		i++;
	}
	return b;
}
int main()
{
	int iValue = 0, iRet=0;
	printf("Enter the Binary Number: \n");
	scanf("%d",&iValue);
	
	iRet= ConvertDecimal(iValue);
	printf("Decimal number is :%d\n", iRet);
	return 0;
	
}
