#include<stdio.h>

int main()
{
	float F, conv;
	printf("Enter the Fahrenheit value\n");
	scanf("%f",&F);
	conv=((F-32.0)*5/9);
	printf("The Celsius value is = %.2f", conv);
	
	return 0;
	
}
