#include<stdio.h>

int main()
{
	float lenght,width,perimeter;
	
	printf("Enter the lenght of the of the rectangle\n");
	
	scanf("%f", &lenght);
	
	printf("Enter the width of the of the rectangle\n");
	
	scanf("%f",&width);
	
//	perimeter = (2*(lenght+width));
	
	printf("The Perimeter of the rectangle is = %.2f",(2*(lenght+width)));
	
	
	return 0;
	
}
