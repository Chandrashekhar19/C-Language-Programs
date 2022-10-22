#include<stdio.h>
int main()
{
	int a,b,c,g;
	printf("Enter a Three Numbers:");
	scanf("%d%d%d",&a,&b,&c);
	g=a;
	if(b>g)
	{
		g=b;
	}
	if(c>g)
	{
		g=c;
	}
	printf("The greater Number is :%d ",g);
	return 0;
}
	    
	