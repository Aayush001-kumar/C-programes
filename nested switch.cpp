#include<stdio.h>

int main()
{
	int choice,side,lenght,bredth,radius;
	
	printf("Press 1 for finding Area\nPress 2 for finding Perimeter\nPress 3 for finding circumfrence\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			{
				printf("Press 1 for finding the area of Squar\nPress 2 for finding the area of Rectangle\nPress 3 for finding the area of circle\n");
				scanf("%d",&choice)	;
				
				switch(choice)
				{
					case 1:
						{
							printf("Enter the side of squar\n");
							scanf("%d",&side);
							printf("Area of suqar is = %d",side*side);
						}
						break;
					case 2:
						 {
						 printf("Enter the length of rectangle\n");
						 scanf("%d",&lenght);
						 printf("Enter the bredth of rectangle\n");
						 scanf("%d",&bredth);
					     printf("Area of rectangle is = %d",lenght*bredth);
						 }
						 break;
					case 3:
						 {
						    printf("Enter the radius of circle\n");
							scanf("%d",&radius);
							printf("Area of suqar is = %d",3.14*radius*radius);
						 }
						 break;
						 
						 default:
						 	printf("you have entred a wrong input");
				}
				break;			
			case 2:
				{
					printf("Press 1 for finding the perimenter of Squar\nPress 2 for finding the perimenter of Rectangle\n");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							{
							 printf("Enter the side of squar\n");
							 scanf("%d",&side);
							 printf("Perimeter of suqar is = %d",4*side);
							}
						break;
						case 2:
							{
								printf("Enter the length of rectangle\n");
						        scanf("%d",&lenght);
						        printf("Enter the bredth of rectangle\n");
						        scanf("%d",&bredth);
					            printf("Perimeter of rectangle is = %d",2*(lenght+bredth));
							}
						break;
							
						 default:
						 	printf("you have entred a wrong input");	
					}
					break;
				case 3:
					{
							printf("Press 1 for finding the circumfrence of circle\n");
							scanf("%d",&choice);	
						    		printf("Enter the radius of circle\n");
									scanf("%d",&radius);
									printf("Circumfrence of circle is = %d",3.14*radius*radius);
								
					 }
					 break;
						 default:
							printf("you have entred a wrong input");
					}
				}
				
						
	}
	return 0;
}
	

