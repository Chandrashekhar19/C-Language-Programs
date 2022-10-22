#include<stdio.h>
int main()
{
	int p1,p2,p3,p4,p5;
	float per,sum;
	printf("----------------------------------------------------------------");
	printf("\nEnter the marks of English:");
	scanf("%d",&p1);
	printf("\nEnter the marks of Marathi:");
	scanf("%d",&p2);
	printf("\nEnter the marks of Math:");
	scanf("%d",&p3);
	printf("\nEnter the marks of Science:");
	scanf("%d",&p4);
	printf("\nEnter the marks of History:");
	scanf("%d",&p5);
	sum=p1+p2+p3+p4+p5;
	printf("----------------------------------------------------------------");
	printf("\nThe Total marks is: %.f ",sum);
	per=(sum/500)*100;
	printf("\nThe Total Percentage is: %.2f ",per);
	return 0;
}