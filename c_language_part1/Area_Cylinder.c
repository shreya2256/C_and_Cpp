#include<stdio.h>
int main()
{
	float r,h,Area;
	printf("Enter radius:");
	scanf("%f",&r);
	printf("Enter height:");
	scanf("%f",&h);
	Area=3.142*r*r*h;
	printf("the Area of Cylinder is:%f",Area);
	return 0;
}
