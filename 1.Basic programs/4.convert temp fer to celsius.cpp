#include<stdio.h>
int main()
{
	float f,C;
    printf("Enter the temp in Fehreneit:");
	scanf("%f",&f);
	C=(f-32)*5/9;
	printf("The Temp is convert in Celsius is: %.2f",C);
	return 0;
}