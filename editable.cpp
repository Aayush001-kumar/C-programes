#include<stdio.h>
#define DAYSINMONTH 30
int main ()
{
	int xdays,year,month,days;
 
    printf("Enter the number of days\n");
    scanf("%d", &xdays);
    year = xdays / 365;
    month =(xdays % 365) / DAYSINMONTH;
    days =(xdays % 365) % DAYSINMONTH;
    printf ("%d is equivalent to\n%d years,\n%d month and\n%d days\n", xdays, year, month, days);
	
	return 0;
	
}
