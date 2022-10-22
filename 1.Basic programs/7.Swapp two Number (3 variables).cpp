#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter the two Numbers:");
	scanf("%d%d",&a,&b);
	printf("\n Before swapping a=%d,b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\n After swapping a=%d,b=%d",a,b);
	return 0;
}