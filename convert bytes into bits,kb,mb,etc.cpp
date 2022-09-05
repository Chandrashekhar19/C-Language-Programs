#include <stdio.h>
int main()
{
	float d,f;
	long a,b,c,e;
	printf("Enter value of bytes:");
	scanf("%ld",&a);
	b=a*8;
	printf("\nThe value in bits=%d",b);
	c=a/1024;
	printf("\nThe value in kb=%ld",c);	
	d=c/1024;
	#fflushinclude<stdin>
	printf("\nThe value in MB=%f",d);
	f=d/1024;
	printf("\nThe value in GB=%f",f);
	e=f/1024;
	printf("\nThe value in TB=%ld",e);
	return 0;
}