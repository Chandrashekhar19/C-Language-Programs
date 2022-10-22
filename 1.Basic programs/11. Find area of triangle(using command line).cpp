#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int b,h;
	float a;
	
    h=atoi(argv[1]);
    b=atoi(argv[2]);
    a=b*h/2;
    printf("The area of triagle is: %.2f",a);
	return 0;
}