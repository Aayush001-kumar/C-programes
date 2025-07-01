#include<stdio.h>

int main ()
{
	float x,result;
	printf("Enter any value you want squar of \n");
	scanf("%f",&x);
	result = x*x;
	printf("The squar is = %.2f", result);
	
	printf("\nEnter any value you want cube of \n");
	scanf("%f",&x);
	result = x*x*x;
	printf("The cube is = %.2f", result);
	
	return 0;
	
}
