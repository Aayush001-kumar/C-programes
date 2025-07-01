#include <stdio.h>
int main()
{
    
    int i;
    int n ;
    printf("We are here to give you tbale of your given number");
    printf("Please enter your number\n");
    scanf("%d",&n);
    printf("table of %d \n",n);
    for ( i =1; i<=10;i++)
    {
        printf("%d*%d = %d\n",n,i,n*i); 
    }
    
    return 0;
}
