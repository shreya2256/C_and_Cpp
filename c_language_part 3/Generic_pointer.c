//Generic pointer- to store address of pointer
#include<stdio.h>
int main()
{
	int no = 11;
	double d = 3.14;
	
	int *ip= &no;
	double *dp=&d;
	void*vp = &no;
	
	printf("%d\n",*ip);
	//printf("%d\n",*dp);
	
	printf("%d\n", *(int *)vp);
	vp = &d;
	
	printf("%lf\n", *(double *)vp);
	
	printf("%d\n",*dp);
	
	return 0;
}
