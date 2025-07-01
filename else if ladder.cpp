// this code need fixation 
#include<stdio.h>

int main() 
{
	float per;
	
	printf("Please enter your Percentage\n");
	scanf("%f",&per);
	
	if(per<=100 && per>=80)
		{
		printf("Congrulations you have gained A+ Grade");
		}	
	else if(per<80 && per>=70)
		{
			printf("Congrulations you have gained A Grade");
		}	
	else if(per<70 && per>=60)
		{
			printf("You have gained B Grade");
		}
	else if(per<60 && per>=50)
		{
			printf("You have gained C Grade");
		}
	else if(per<50 && per>=40)
		{
			printf("You have gained D Grade");
		}
	else if(per<40)
		{
			printf("We are sorry to tell you that you have failed the examination \nHow ever you can apper for backlog tests");
		}
	else 
		{
			printf("You have entered the wrong data\nPlease enter valid Data");
		}
		return 0;
}
