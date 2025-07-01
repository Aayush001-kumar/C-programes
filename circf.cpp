#include<stdio.h>

int main()
{
	float radius,circf;
	const float PI=3.14;
		
	printf("Enter the value of the Radius of circle\n");
	scanf("%f",&radius);

	circf = 2*PI*radius;
	
	printf("\nThe Circumference of the circle is =%.2f", circf);
	
	return 0;	

}
