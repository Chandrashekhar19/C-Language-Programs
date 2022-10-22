#include<stdio.h>
int main()
{
	int a,b,c,larg;
	printf("Enter a Any three Numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	larg=a;
	if(b>larg)
	{
		larg=b;
	}
	if(c>larg)
	{
		larg=c;
	}
	printf("\nThe Largest Number is %d",larg);
	if(a==b && b==c && c==a)
	{
		printf("\nThe Numbers are equal");
	}
	else
	{
		printf("\nThe Numbers are NOT equal");
	}
	return 0;
}
	
	