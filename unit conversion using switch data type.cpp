#include<stdio.h>
int main()
{
	float value;
	int choice;
	
	printf("Press 1 for km to m conversion\nPress 2 for m to km conversion\nPress 3 for cm to m conversion\nPress 4 for m to cm conversion\n");
	printf("Press 5 for mm to cm conversion\nPress 6 for cm to mm conversion\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter you vale in km\n");
			scanf("%f",&value);
			printf("%f km = %.3f m",value,value*1000);
			break;
		case 2:
			printf("Enter you vale in m\n");
			scanf("%f",&value);
			printf("%f mm = %.3f km",value,value/1000);
			break;
		case 3:
			printf("Enter you vale in cm\n");
			scanf("%f",&value);
			printf("%f cm = %.3f m",value,value/100);
			break;
		case 4:
			printf("Enter you vale in m\n");
			scanf("%f",&value);
			printf("%f m = %.3f cm",value,value*100);
			break;
		case 5:
			printf("Enter you vale of mm\n");
			scanf("%f",&value);
			printf("%f mm = %.3f cm",value,value/10);
			break;
		case 6:
			printf("Enter you vale of cm\n");
			scanf("%f",&value);
			printf("%f cm = %.3f mm",value,value*10);
			break;					
		default :
			printf("YOU HAVE ENTER AN INVALID KEY\nPLEASE ENTER A VALID KEY");
		}
	return 0;
}
