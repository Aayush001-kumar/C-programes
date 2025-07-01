#include <stdio.h>
int main ()
{
	float num1;
	
	printf("Enter any number\n");
	scanf("%f",&num1);
	
	if (num1>=1)
	{
		printf("Your given number is Positive");
	}	
	else if (num1<0)
	{
		printf("Your given number is Negative");
	}
	else 
		{
			printf("Your given number is zero");
		}
	
	return 0;
}

