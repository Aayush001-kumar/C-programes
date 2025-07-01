#include<stdio.h>

int main()
{
	int age;
	
	printf("Please enter your age : \n");
	scanf("%d",&age);
	
	if (age>=18)
	{
		printf("Congrulations you are eligibal for voting\n");
	}
	else
	{
		printf("Sorry you under 18 you are not eligibal for voting\nplease wait %d years",18-age);
	}
	return 0;
}
