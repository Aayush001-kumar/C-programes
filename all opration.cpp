#include<stdio.h>

int main()
{
	float num1;
	float num2;
	 
	printf("Enter first vale =");
	scanf("%f",&num1);
	printf("Enter second value =");
	scanf("%f",&num2);
	 
	float result_mul = num1 * num2;
    float result_add = num1 + num2;
    float result_sub = num1 - num2;
	float result_div = num1 / num2;
	 
    printf("Multiplication = %.2f\n", result_mul);
    printf("Addition = %.2f\n", result_add);
    printf("Subtraction = %.2f\n", result_sub);
	printf("Division = %.2f",result_div);
	 
	return 0;
}

