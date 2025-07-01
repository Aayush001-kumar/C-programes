#include<stdio.h>
int main()
{
	int num;
	
	printf("Checking if its odd or even\nexcept0\n");
	printf("Please enter your number: ");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("Given number is Even");
	}
	else
	{
		printf("Given number is Odd");
	}
	return 0;
}
