//program for factor addition
int factors(int ino)
{
	int i=0,isum=0;
	if(ino<0)
	{
		ino=-ino;
	}
	for(i=1;i<=10;i++)
	{
		if((ino%i)==0)
		{
			isum=isum=i;
		}
	}
	return 0;
}
int main()
{
	int ivalue=0,iref=0;
	printf("ENTER NUMBER:");
	scanf("%d",&ivalue);
	iref=factors(ivalue);
	printf("ADDITION OF FACTORS ARE %d",iref);
	return 0;
}
