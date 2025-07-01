#include<stdio.h>

int main()

{
	char name[20];
	
	printf("Enter your Full Name\n");
	
	//scanf("%c",&name);	
	gets(name);
	
	printf("Your name is : %s", name);
	
	return 0;
	
}
