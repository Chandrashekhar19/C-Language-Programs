#include<stdio.h>
int main()
{
	int per;
    printf("Enter the Percentage: ");
    scanf("%d",&per);
    printf("--------------------------------");
    if(per>70 && per<100)
    {
    	printf("\nGRADE is'A'");
	}
	if(per>60 && per<70)
    {
    	printf("\nGRADE is'B+'");
	}
	if(per>45 && per<60)
    {
    	printf("\nGRADE is'B'");
	}
	if(per>35 && per<45)
    {
    	printf("\nGRADE is'C'");
	}
	if(per<35)
	{
		printf("\nFAIL");
	}
    return 0;
}