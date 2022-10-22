#include<stdio.h>
int main()
{
	int n,no,sq,cu,num;
	s:
	printf("\nChoice 1: Accept number & find out Squre & cube.");
	printf("\nChoice 2: Check whether The given year is leap or not.");
	printf("\nChoice 3: exit.");
	printf("\n---------------------------------------------------------------");
	printf("\nEnter your Choice: ");
	scanf("%d",&n);
	printf("\n---------------------------------------------------------------");
	switch(n)
	{
		case 1:
		printf("\nEnter any Number: ");
		scanf("%d",&no);
		sq=no*no;
		cu=no*no*no;
		printf("\nThe Squre of Number is: %d.\nThe cude of Number is: %d",sq,cu);
		printf("\n---------------------------------------------------------------");
		goto s;
		case 2:
		printf("\nEnter any Year: ");
		scanf("%d",&num);
		if(num%4==0)
		{
			printf("\nThe Year is leap year");
		}
		else 
		{
		    printf("\nThe Year is NOT leap year");	
		}
		printf("\n---------------------------------------------------------------");
		goto s;
		default: 
		{
			printf("\n'Entered Choice is wrong.'");
		}
	}
	return 0;
}