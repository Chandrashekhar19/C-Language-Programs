#include<stdio.h>
int main()
{
	int no;
	printf("Enter any Number:");
	scanf("%d",&no);
	printf("----------------------------------------------------");
	if(no>0)
	{
		printf("\nThe Number is positive");
	}
	if(no==0)
	{
		printf("\nThe Number is Zero");
	}
	if(no<0)
	{
		printf("\nThe Number is Negative");
    }
    return 0;
}