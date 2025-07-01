#include<stdio.h>

int main() 
{
    float value;
    char choice;
    
    printf("Press L for Length unit conversion\nPress W for Weight unit conversion\nPress H for Height unit conversion\nPress T for Temperature unit conversion\n");
    scanf(" %c", &choice);
    
    switch(choice) {
        case 'L':
        case 'l':
            {
                printf("Press K for km to m conversion\nPress M for m to km conversion\n");
                scanf(" %c", &choice);
                
                switch(choice) {
                    case 'K':
                    case 'k':
                        printf("Enter your value in km\n");
                        scanf("%f", &value);
                        printf("%f km = %.3f m", value, value * 1000);
                        break;
                    case 'M':
                    case 'm':
                        printf("Enter your value in m\n");
                        scanf("%f", &value);
                        printf("%f m = %.3f km", value, value / 1000);
                        break;
                    default:
                        printf("You have entered a wrong input\n");
                }
            }
            break;
        case 'W':
        	case 'w':
            {
                printf("Press K for kg to g conversion\nPress G for g to kg conversion\n");
                scanf(" %c", &choice);
                switch(choice) {
                    case 'K':
                    	case 'k':
                        printf("Enter your value in kg\n");
                        scanf("%f", &value);
                        printf("%f kg = %.3f g", value, value * 1000);  // Corrected
                        break;
                    case 'G':
                    	case 'g':
                        printf("Enter your value in g\n");
                        scanf("%f", &value);
                        printf("%f g = %.3f kg", value, value / 1000);  // Corrected
                        break;
                    default:
                        printf("You have entered a wrong input\n");
                }
            }
            break;
        case 'H':
        	case 'h':
            {
                printf("Press M for mm to cm conversion\nPress C for cm to mm conversion\nPress F for cm to foot conversion\nPress D for foot to cm conversion\nPress I for cm to inch conversion\nPress T for inch to cm conversion\n");
                scanf(" %c", &choice);
                switch(choice) {
                    case 'M':
                    	case'm':
                        printf("Enter your value in mm\n");
                        scanf("%f", &value);
                        printf("%f mm = %.3f cm", value, value / 10);
                        break;
                    case 'C':
                    	case 'c':
                        printf("Enter your value in cm\n");
                        scanf("%f", &value);
                        printf("%f cm = %.3f mm", value, value * 10);
                        break;
                    case 'F':
                    	case 'f':
                        printf("Enter your value in cm\n");
                        scanf("%f", &value);
                        printf("%f cm = %.3f feet", value, value / 30.48);
                        break;
                    case 'D':
                    	case 'd':
                        printf("Enter your value in foot\n");
                        scanf("%f", &value);
                        printf("%f foot = %.3f cm", value, value * 30.48);
                        break;
                    case 'I':
                    	case 'i':
                        printf("Enter your value in cm\n");
                        scanf("%f", &value);
                        printf("%f cm = %.3f inches", value, value / 2.54);
                        break;
                    case 'T':
                    	case 't':
                        printf("Enter your value in inches\n");
                        scanf("%f", &value);
                        printf("%f inches = %.3f cm", value, value * 2.54);
                        break;
                    default:
                        printf("You have entered a wrong input\n");
                }
            }
            break;
        case 'T':
        	case 't':
            {
                printf("Press C for Celsius to Fahrenheit conversion\nPress F for Fahrenheit to Celsius conversion\n");
                scanf(" %c", &choice);
                switch(choice) {
                    case 'C':
                    	case 'c':
                        printf("Enter your value in Celsius\n");
                        scanf("%f", &value);
                        printf("%f C = %.3f F", value, (value * 9 / 5) + 32);
                        break;
                    case 'F':
                    	case 'f':
                        printf("Enter your value in Fahrenheit\n");
                        scanf("%f", &value);
                        printf("%f F = %.3f C", value, (value - 32) * 5 / 9);
                        break;
                    default:
                        printf("You have entered a wrong input\n");
                }
            }
            break;
        default:
            printf("You have entered a wrong input\n");
    }
    return 0;
}

