#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i;
	FILE *fp;
	char s[]="Hello Everyone";
	fp=fopen("f1.txt","w");
	if(fp==NULL)
	{
		printf("file can't open'");
		exit(1);
    }
	for(i=0;i<strlen(s);i++)
	fputc(s[i],fp);
	fclose(fp);
	getch();
		
}
