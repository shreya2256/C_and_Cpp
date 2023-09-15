#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
int i;
FILE *FP;
char s[]="Hello Everyone";
 FP=fopen("f1.txt","w");
if(FP==NULL)
{
	printf("File can't open");
	exit (1);
	}
	for(i=0;i<strlen(s);i++)
	fputc(s[i],FP);
	fclose(FP);
	getch()	;
}
