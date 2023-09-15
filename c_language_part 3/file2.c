#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	FILE *fp;
	char s[100];
	fp=fopen("f2.txt","w");
	if(fp==NULL)
	{
		printf("file can't open");
		exit(1);
	}
	printf("Enter a string :");
	gets(s);
	for(i=0;i<strlen(s);i++)
	fputc(s[i],fp);
	getch();
	fclose(fp);
	getch();
}
