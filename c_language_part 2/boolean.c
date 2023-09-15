#include<stdio.h>
enum boolean //we can store data whose datatype is not known e.g true/false
{
	false,true
};
enum boolean isEven(int x)// write enum insted of int/void
{
	if(x%2==0)
	return (true);
	else
	return(false);
}
int main()
{
	int n;
	enum boolean result; //enum boolean
	printf("Enter a number:");
	scanf("%d",&n);
	result=isEven(n);
	if(result==true)
	printf("even number");
	else
	printf("odd number");
	return 0;
}

