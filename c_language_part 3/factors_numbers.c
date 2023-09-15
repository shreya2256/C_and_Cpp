//accept the number and display factors of number
#include<stdio.h>
void factors(int ino)//ivalue is store in ino
{
	int i=0;  //Variable declaration
	if(ino<0)  //Condition
	{
		ino=ino;
	}
    for(i=1;i<=ino;i++) //i=1;1<=10;1+1=2
					    //i=2;2<=10;2+1=3
					    //i=3;3<=10;3+1=4
					    //i=4;4<=10;4+1=5
					    //i=5;5<=10;5+1=6
					    //i=6;6<=10;6+1=7
					    //i=7;7<=10;7+1=8
					    //i=8;8<=10;8+1=9
					    //i=9;9<=10;9+1=10
					    //i=10;10<=10;10+1=11
					    //i=11;11<=10;
		{
			if((ino%i)==0)
			{
				printf("%d\n",i);
				
			}
		}			        				   
}
int main()
{
	int ivalue=0;  //Variable declaration
	printf("Enter the number\n");
	scanf("%d",&ivalue);   
	factors(ivalue);        //factors(10)function calling
	return 0;
}
	
