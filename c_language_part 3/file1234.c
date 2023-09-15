#include<stdio.h>
void main()
{
	FILE *fp;
	int a,b,c;
	
	fp=fopen("f1.txt","r");
	fscanf(fp,"%d%d%d",&a,&b,&c);//to gain data from file
	printf("a=%d b=%d c=%d",a,b,c);
	fclose(fp);
}

