#include<stdio.h>
#include<string.h>

int main()
{
	int a,b,add,sub,mult,div;
	int n;
	s:
	printf("\n------------------------------------------------");
	printf("\n1. Add two Numbers for Operation");
	printf("\n2. Addition");
    printf("\n3. Substraction");
	printf("\n4. Multiplication");
	printf("\n5. Division");
	printf("\n6. exit");
	printf("\n------------------------------------------------");
	printf("\nEnter Your Choice: ");
	scanf("%d",&n);
	switch(n)
	{
			case 1:
			printf("\nEnter the first number:");
			scanf("%d",&a);
			printf("\nEnter the Second number:");
			scanf("%d",&b);
			goto s;
			
			case 2:
			add=a+b;
			printf("\nThe addition of %d & %d is: %d",a,b,add);
			goto s;
			
			case 3:
			sub=a-b;
			printf("\nThe Substraction of %d & %d is: %d",a,b,sub);
			goto s;
			
			case 4:
			mult=a*b;
				printf("\nThe Multiplication of %d & %d is: %d",a,b,mult);
			goto s;
			
			case 5:
			div=a/b;
				printf("\nThe Division of %d & %d is: %d",a,b,div);
			goto s;	
			
			case 6:
			        
					break;
    }
	return 0;
}