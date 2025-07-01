#include<stdio.h>
int main()
{
	int num;
	
	printf("Checking if its odd or even\nexcept0\n");
	printf("Please enter your number: ");
	scanf("%d",&num);
	
	if((2*num)+1)
	{
		printf("Given number is Odd");
	}
	else if(2*num)
	{
		printf("Given number is Even");
	}
	return 0;
}
