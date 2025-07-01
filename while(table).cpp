#include<stdio.h>
int main()
{
	 int table,i=1;
	printf("We are here to give you table of your given number\n");
   printf("Please enter your number\n");
   scanf("%d",&table);
   printf("table of %d \n",table);
   
   while(i<=10)
   {
   	printf("%d*%d = %d\n",table,i,table*i); 
   	i++;
	}
	return 0;
}
