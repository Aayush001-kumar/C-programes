#include<stdio.h>

int main()
{
	char ch,A,Z;
	printf("To check if the given Character is upper case or lowercase");
	printf("\nPlease enetr your Character\n");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("You given character is upper case");
	}
	else
	{
		printf("You given character is lowercase");
	}

	return 0;
}
