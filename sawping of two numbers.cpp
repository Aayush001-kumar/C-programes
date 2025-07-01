#include<stdio.h>
int main ()
{
	int a; //first container
	int b; //second container 
	int c; //third container
	
	printf("Enter value that needs to be sawpped\n");
	
	printf("Value of a=");// user first value
	scanf("%d", &a);// storing frist value

	printf("Value of b=");// users 2nd value
	scanf("%d", &b);// storing 2nd value
	
	
	c=a; 
	a=b; 
	b=c;
	
	printf("Value after sawping\n");
	printf("Value of a : %d", a);
	printf("\nValue of b : %d", b);
	
	return 0;
}
