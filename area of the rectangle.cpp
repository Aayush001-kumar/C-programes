#include<stdio.h>

int main()
{
	float length, width, area;
	
	printf("Enter the Lenght of the Rectangle\n");
	
	scanf("%f",&length);
	
	printf("Enter the Width of the Rectangle\n");

	scanf("%f",&width);
	
	area = length*width;
	
	printf("The area of the Rectangle is = %.2f",area);
	
	return 0;
	
}
