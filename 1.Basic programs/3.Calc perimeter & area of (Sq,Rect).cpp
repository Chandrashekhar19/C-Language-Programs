#include<stdio.h>
int main()
{
	int l,w,p,a,s,A,P;
	printf("Enter the length Rectangle: ");
	scanf("%d",&l);
	printf("Enter the width Rectangle: ");
	scanf("%d",&w);
    	p=2*(l+w);
	printf("\nThe perimeter of Rectangle is %d",p);
	    a=l*w;
	printf("\nThe Area of Rectangle is %d",a);
	
	printf("\nEnter the length square: ");
	scanf("%d",&s);
	A=s*s;
	printf("\nThe Area of Square is %d",A);
	P=4*s;
	printf("\nThe perimeter of Square is %d",P);
	
	return 0;
}