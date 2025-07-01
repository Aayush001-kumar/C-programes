#include<stdio.h>
int main()
{
	int n,result=1;
	printf("Enter the number you want factorila of (except 0) =\n");
	scanf("%d",&n);
	if(n==0)
	{
		printf("Please enter any other value then 0");
	}
	else 
	{
		int i=1;
		while(i<=n)
		{
			result *=i;
			i++;
		}
		printf("Factorial of %d = %d",n,result);
	}
	return 0;
}
