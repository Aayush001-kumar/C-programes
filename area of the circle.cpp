#include<stdio.h>

int main ()
{
	float radius, area;
	const float PI=3.14;
	printf("Enter the Radius of the Circle\n");
	scanf("%f",&radius);
	
	area = PI*radius*radius;
	
	printf("Area of the circle is = %.2f", area);
	
	return 0;
		
}
