#include<stdio.h>

int main()
{
	char gender,M,F;
	
	printf("Please enter your Gender: (F - Female or M - Male)\n");
	scanf("%c",&gender);
	
	if(gender=='M')
	{
		int age;
		printf("Please enter your age\n");
		scanf("%d",&age);
		
		if(age>=21)
		{
			printf("Congrulations you are elegibal for Marrige\n");
		}
		else
		printf("You are not elegibale for marriage\nPlease focus on your carrier first");
	}
	else if(gender=='F')
	{
			int age;
			printf("Please enter your age\n");
			scanf("%d",&age);
		
		if(age>=18)
		{
			printf("Congrulations you are elegibal for Marrige\n");
		}
		else
		printf("You are not elegibale for marriage\nPlease focus on your carrier first");
	}

	return 0;

}
