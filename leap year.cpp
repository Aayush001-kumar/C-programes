#include<stdio.h>
int main()
{
	int year;
	printf("To check if the year is a leap year or not\n");
	printf("Enter the year you want to check (YYYY) = \n");
	scanf("%d",&year);
	
	(year%4==0) ? printf("Its a leap year") : printf("Its not a leap year");
	
	return 0;
}
