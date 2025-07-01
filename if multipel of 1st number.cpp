#include<stdio.h>

int main()
{
	int num1,num2;
	printf("To check if the given number is multiple of the 2nd number\n");
	printf("Enter your first number = \n");
	scanf("%d",&num1);
	printf("Enter your second number(should be smaller then the first number) = \n");
	scanf("%d",&num2);
	
	(num1%num2==0) ? printf("%d is the multiple of the %d",num1,num2) : printf("%d is not the multiple of the %d",num1,num2);
	
	return 0;
}
