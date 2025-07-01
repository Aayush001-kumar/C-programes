#include<stdio.h>    

int main() 
{
    int a[10], n, i;    
    // Remove system("cls") for better portability across environments
    printf("Enter the Decimal number to convert:");    
    scanf("%d", &n);    
    
    // Check if the number is zero
    if(n == 0)
	{
        printf("\nBinary of Given Number is= ");
        return 0;
    }

    for(i = 0; n > 0; i++)
	{    
        a[i] = n % 2;    
        n = n / 2;    
    }    

    printf("\nBinary of Given Number is = ");    
    for(i = i - 1; i >= 0; i--) 
	{    
        printf("%d", a[i]);    
    }    
    return 0;    
}

