#include<stdio.h>

int main()
{
	float side,perimeter;
	
	printf("Enter the Side of the of the Squar \n");
	
	scanf("%f", &side);
	
	perimeter = 4*side;
	
	printf("The Perimeter of the squar is = %.2f",perimeter);
	
	return 0;
	
}
