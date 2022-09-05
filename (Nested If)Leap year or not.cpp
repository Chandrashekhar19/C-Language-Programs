#include<stdio.h>
int main()
{
	int year;
	printf("Enter year:");
	scanf("%d", &year);
	if(year%100!=0)
	{if(year%4==0)
	printf("%d is leap year.\n",year);
	else
	if(year%400==0)
	printf("%d is not a Leap year.\n",year);
	}
	else {
		if(year%400==0)
		printf("%d is leap year.\n",year);
		else
		printf("\n%d is not leap year",year);
	}	
	return 0;
}