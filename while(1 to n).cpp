#include<stdio.h>
int main ()
{
	int num,i=1;
	printf("Please let me know your limt till you want to print your numbers\n");
	scanf("%d",&num);
	printf("Here are your numbers\n");
	while(i<=num)
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}
