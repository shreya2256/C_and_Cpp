//Write a p[rogram to display average of given numbers in an array
#include<stdio.h>
int array(int size)
{ 
int i=0,a[size],count=0,sum=0,avg=0;
printf("Enter elements:");//size of array=4 
for(i=0;i<=size;i++)     //i=0; 0<=4; 0+1=1
						//i=1; 1<=4; 1+1=2
						//i=2; 2<=4; 2+1=3
						//i=3; 3<=4; 3+1=4
						//i=4; 4<=4; 4+1=5
						//i=5; 5<=4;  
{
	scanf("%d",&a[i]);   //&a[0]=67
						//&a[1]=92
						//&a[2]=43
						//&a[3]=29
						//&a[4]=55
}
for(i=0;i<=size;i++)     //i=0; 0<=4; 0+1=1
						//i=1; 1<=4; 1+1=2
						//i=2; 2<=4; 2+1=3
						//i=3; 3<=4; 3+1=4
						//i=4; 4<=4; 4+1=5
						//i=5; 5<=4;
{
	sum=sum+a[i]; //a[0]+a[1]+a[2]+a[3]+a[4]
	    		  //67+92+43+29+55
	avg=sum/size;//a[0]+a[1]+a[2]+a[3]+a[4]/5
	             //(67+92+43+29+55)/5
}
printf("Addition of given numbers is:%d\n",sum);//286
printf("Average of given numbers is:%d",avg);//71.5
return avg;
}
int main()
{
	int isize=0;
	printf("Enter the number of elements:");
	scanf("%d",&isize);
	array(isize);
	return 0;
}

