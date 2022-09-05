#include<stdio.h>
int main()
{
	int p1,p2,p3,t;
	printf("Enter a three paper Marks:");
	scanf("%d%d%d",&p1,&p2,&p3);
	t=p1+p2+p3;
	printf("The toatal marks are:%d",t);
	if(t<45)
	{
		printf("\nFail");
	}
	if(t>45)
	{
		printf("\nPass");
	}
	return 0;
}