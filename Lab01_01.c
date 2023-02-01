#include <stdio.h>

int main()
{
    int hours;
    int minutes;
    float seconds;
    printf("Enter the number of hours: ");
    scanf("%i", &hours);
    
    printf("Enter the number of minutes: ");
    scanf("%i", &minutes);
    
    printf("Enter the number of seconds: ");
    scanf("%f", &seconds);
    
    printf("The entered time is: %i",hours);
    printf(" hours %i", minutes);
    printf(" minutes and %f", seconds);
    printf(" seconds");
    
    return 0;
}
