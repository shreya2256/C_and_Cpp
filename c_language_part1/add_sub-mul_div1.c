#include<stdio.h>
#include"59_Myhead.h"//add last filename here as header file

void main()
{
	int num1=10, num2=10 , num3 , num4 , num5 , num6;
	
	num3= add(num1,num2);
	printf("Addition of two numbers is:%d\n",num3);
	
	num4= sub(num1,num2);
	printf("Substraction of two numbers is:%d\n",num4);
	
	num5= multi(num1,num2);
	printf("Multiplication of two numbers is:%d\n",num5);
	
	num6= div(num1,num2);
	printf("Division of two numbers is:%d\n",num6);
		
}


