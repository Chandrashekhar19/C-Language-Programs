#include<stdio.h>
int main()
{
	int a,b,c,small;
	printf("Enter the Three Numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		small=a;
		else
		small=c;
	}
	else
	{
	if(b<c)
	small=b;
	else 
	small=c;
	}
	printf("\nThe smallest Number is:%d",small);
	return 0;
}