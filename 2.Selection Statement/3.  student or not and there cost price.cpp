#include<stdio.h>
int main()
{
	char user;
	int price1,dis1,dis2,P1,P2,price2,d1,d2,p1,p2;
	printf("The user is student Or not (Y/N):");
	scanf("%c",&user);
	if(user =='Y' || user=='y')
	{
	   printf("\nThe user is a student");
	   printf("\n---------------------------------------------------------------");
	   printf("\nEnter the cost price for a Student: ");
       scanf("%d",&price1);
       printf("\n---------------------------------------------------------------");
		 if(price1>=500)
		 {
		 	dis1=(price1/100)*10;
	       	P1=price1-dis1;
	       	printf("\nThe discount is: %d\nThe cost price for a student is: %d ",dis1,P1);
	       	printf("\n---------------------------------------------------------------");
		 }
		 else
		 { 
		 	dis2=(price1/100)*5;
	       	P2=price1-dis2;
	       	printf("\nThe discount is: %d\nThe cost price for a student is: %d ",dis2,P2);
		 	
		 }
	} 
	else
	{
		 printf("The user is NOT a student");
	   printf("\n---------------------------------------------------------------");
	   printf("\nEnter the cost price for a user: ");
       scanf("%d",&price2);
       printf("\n---------------------------------------------------------------");
		 if(price2>=500)
		 {
		 	d1=(price2/100)*8;
	       	p1=price2-d1;
	       	printf("\nThe discount is: %d\nThe cost price for a student is: %d ",d1,p1);
	       	printf("\n---------------------------------------------------------------");
		 }
		 else
		 { 
		 	d2=(price2/100)*2;
	       	p2=price2-d2;
	       	printf("\nThe discount is: %d\nThe cost price for a student is: %d ",d2,p2);
		 	
		 }
		
	}
      
	return 0;
}