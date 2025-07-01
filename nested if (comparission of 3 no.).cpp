#include<stdio.h>

int main()
{
	int num1,num2,num3;

	printf("Enter your number you want to compare\n");
	printf("Enter your 1st number = \n");
	scanf("%d",&num1);
	printf("Enter your 2nd number = \n");
	scanf("%d",&num2);
	printf("Enter your 3rd number = \n");
	scanf("%d",&num3);
	
	if(num1>num2){
		if(num1>num3){
			printf("%d is gratest\n",num1);}
			else {
				printf("%d is gratest\n",num3);
			}
		}
	else{
		if(num2>num3){
		printf("%d is gratest\n",num2);
		}
		else{
			printf("%d is gratest\n",num3);
		}
	}
	return 0;
}
