#include<stdio.h>
int main()
{
	int distance,time,speed;
	printf("Enter a Distance in km :");
	scanf("%d",&distance);
	printf("Enter the time in hr :");
	scanf("%d",&time);
	speed=distance/time;
	printf("The speed in is : %d km/hr ",speed);
	return 0;
}