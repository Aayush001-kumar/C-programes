#include<stdio.h>

int main()
{
	int num1,num2;
	
	printf("Enter number 1 = \n");
	scanf("%d",&num1);
	
	printf("Enter number 2 = \n");
	scanf("%d",&num2);

	if(num1>num2)
	{
		printf("Number %d is greater then Number %d \n",num1,num2);
	}
	else if (num1==num2)
	{
		printf("Both the given number are equal");
	}
		else
	{
		printf("NUmber %d is greater then Number %d\n",num2,num1);
	}
	return 0;
}

