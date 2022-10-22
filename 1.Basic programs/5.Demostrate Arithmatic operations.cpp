#include<stdio.h>
int main()
{
	int n,a,b,add,sub,mult,div;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the Second number:");
	scanf("%d",&b);
	printf("----------------------------------------------");
	add=a+b;
	printf("\nThe addition of two Number is:%d",add);
	sub=a-b;
	printf("\nThe Substraction of two Number is:%d",sub);
	mult=a*b;
	printf("\nThe Multiplication of two Number is:%d",mult);
	div=a/b;
	printf("\nThe Division of two Number is:%d",div);
	return 0;
}