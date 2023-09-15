#include<stdio.h>
int main()
{   
    int a;
    printf("Enter no:");
    scanf("%d",&a);
    display(a);    //Function calling
    return 0;
}

void display(int n) //Function defination0
{
	int i=0;
	while(i<=n)
	{
		
	  printf("%d\n", i);
	  i++;	
	}  //loop close
}//Function close



