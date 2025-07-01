#include<stdio.h>

int main ()
{
	float percentage;
	
	printf("Please enter your 1 semester percentage\n");
	scanf("%f",&percentage);
	
	if(percentage>=40)
	{
		printf("Congrulations You have passed your examinations\nYou can proceed for next semester");
	}
	else
	{
		printf("We are Sorry to inform you that you have failled the examination\nBut you can apper for reexamination and try again");
	}

	return 0;
}

