#include<stdio.h>
int main()
{
	int n;
	printf("Enter a Age of person:");
	scanf("%d",&n);
	if(n>=18)
	{
		printf("\nThe Person is eligible for vote");
	}
	else
	    printf("\nThe Person is not eligible for vote");
	    
	    return 0;
}