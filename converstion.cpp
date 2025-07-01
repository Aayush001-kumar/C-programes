#include<stdio.h>

int main()

{
	float km,m;
	
	printf("Enter value you want to convert from m to km\n");
	
	scanf("%f",&m);
    
    printf("%.4f Meter = %.3f Km",m,m/1000);
	
	return 0;
	 
}
