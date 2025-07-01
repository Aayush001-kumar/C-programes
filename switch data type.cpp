#include<stdio.h>

int main ()
{
	int a,b;
	float c;
	int choice;
	
	printf("Press 1 on keyboard for Addition\nPress 2 for Substraction\nPress 3 for Multiplication \nPress 4 for Division\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter the two numbers \n");
			scanf("%d\n%d",&a,&b);
			printf("Addition of given two numbers is = %d",a+b);
			break ;
		
		case 2:
			printf("Enter the two numbers \n");
			scanf("%d\n%d",&a,&b);
			printf("Substraction of given two numbers is = %d",a-b);
			break ;
		
		case 3:
			printf("Enter the two numbers \n");
			scanf("%d\n%d",&a,&b);
			printf("Multiplication of given two numbers is = %d",a*b);
			break ;
		case 4:
			printf("Enter the two numbers \n");
			scanf("%d\n%f",&a,&c);
			printf("Division of given two numbers is = %.2f",a/c);
			break ;
			
		default:
			printf("Please enter a valid input");
			
	}
	return 0;
	
}
