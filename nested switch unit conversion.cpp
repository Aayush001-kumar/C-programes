#include<stdio.h>

int main()
{
	float value;
	int choice;
	
	printf("Press L for Lenght unit conversion\nPress W for weight unit conversion\nPress H for height unit conversion\nPress T for tempruture unit conversion\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			
			{
				printf("Press K for km to m converison\nPress M for m to km conversion\n");
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
				printf("%f m = %.3f km",value,value/1000);
				break;
			default:
				printf("you have entred a wrong input");
			}
	}
		case 2:
			{
				printf("Press k for kg to g converison\nPress G for g to kg conversion\n");
				scanf("%c",&choice);
				switch(choice)
				{
				printf("Enter you vale in kg\n");
				scanf("%f",&value);
				printf("%f kg = %.3f g",value,value/1000);
			 	break;
				case 2:
				printf("Enter you vale in g\n");
				scanf("%f",&value);
				printf("%f g = %.3f kg",value,value*1000);
				break;
				default:
				printf("you have entred a wrong input");
				}
			}
		case 3:
			{
				printf("Press M for mm to cm converison\nPress C for cm to mm conversion\nPress  for cm to foot conversion\nPress D for foot to cm conversion\nPress I for cm to inch conversion\nPress T for inch to cm conversion\n");
				scanf("%c",choice);
				switch(choice)
				{
					case 1:
						{
							printf("Enter you vale in mm\n");
							scanf("%f",&value);
							printf("%f km = %.3f m",value,value*10);
						}
					break;
					case 2:
						{
							printf("Enter you vale in cm\n");
							scanf("%f",&value);
							printf("%f km = %.3f m",value,value/10);
						}
					break;
					case 3:
						{
							printf("Enter you vale in cm\n");
							scanf("%f",&value);
							printf("%f km = %.3f m",value,value/30.48);
						}
					break;
					case 4:
						{
							printf("Enter you vale in foot\n");
							scanf("%f",&value);
							printf("%f km = %.3f m",value,value*30.48);
						}
					break;
					case 5:
						{
							printf("Enter you vale in cm\n");
							scanf("%f",&value);
							printf("%f km = %.3f m",value,value/2.54);
						}
					break;
					case 6:
						{
							printf("Enter you vale in inch\n");
							scanf("%f",&value);
							printf("%f km = %.3f m",value,value*2.54);
						}
						default:
							{
							printf("you have entred a wrong input");
							}
			}
			break;
		case 4:
			{
					printf("Press C for celcious to Fehrnite converison\nPress F for fehrnite to celcious conversion\n");
					scanf("%c",&value);
					switch(choice)
					{
						case 1:
							printf("Enter you vale in celcious\n");
							scanf("%f",&value);
							printf("%f km = %.3f m",value,(value*9/5) + 32);
						break;
						case 2:
							printf("Enter you vale in Fhranite\n");
							scanf("%f",&value);
							printf("%f m = %.3f km",value,(value-32)*5/9);
							break;
							default:
							{
							printf("you have entred a wrong input");
							}
					}
			}
				
			}
			break;
			default:
				{
					 printf("you have entred a wrong input");
				}	
	}
	return 0;					
}

