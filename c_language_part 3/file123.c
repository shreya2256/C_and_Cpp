#include<stdio.h>
void main()
{
	FILE *fp;
	int a,b;
	fp=fopen("f1.txt","w");
	printf("Enter Two number :");
	scanf("%d %d",&a,&b);
	fprintf(fp,"Sum of %d and %d is %d",a,b,a+b);//to store data in file use fprintf function
	fclose(fp);	
}


