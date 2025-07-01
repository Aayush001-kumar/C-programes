#include<stdio.h>

int main()
{
	int prin_amt;
	float rate_of_int;
	float no_of_yr;
	float intrest;
	float final_amt;
	
	printf("Enter pricial amount \n");
	scanf("%d",&prin_amt);
	printf("Enter rate of intrest \n");
	scanf("%f",&rate_of_int);
	printf("Enter number of year\n");
	scanf("%f",&no_of_yr);
	
	intrest = (prin_amt*rate_of_int*no_of_yr)/100;
	
	printf("Intrest you need to pay = %.2f\n", intrest);
	
	final_amt = prin_amt + intrest;
	printf("Final amount you need to pay to Bank = %.2f",final_amt);
	
	return 0;
	
}
