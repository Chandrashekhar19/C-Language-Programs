#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two Numbers:");
	scanf("%d%d",&a,&b);
	printf("\nBefore swapping Numbers are a=%d,b=%d,",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping Numbers are a=%d,b=%d,",a,b);
	return 0;
}