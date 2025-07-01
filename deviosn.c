#include<stdio.h>

int main()

{
	float num1;
	float num2;
	
	printf("Enter any two value\n");
	
	scanf("%f",&num1);
	scanf("%f",&num2);
	
	float result = num1/num2;
	    
     	printf("Division = %.2f",result);
	
		
		return 0;
		
}
