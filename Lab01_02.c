#include <stdio.h>

int main()
{
    int x;
    int y;
    float average;
    
    printf("Enter an integer: ");
    scanf("%i", &x);
    
    printf("Enter an integer: ");
    scanf("%i", &y);
    x=x+y;
        
    printf("Enter an integer: ");
    scanf("%i", &y);
    x=x+y;
    
    printf("Enter an integer: ");
    scanf("%i", &y);
    x=x+y;
    
    printf("Enter an integer: ");
    scanf("%i", &y);
    x=x+y;
    
    average=x/5;
    printf("The average of the 5 intergers is %.2f", average);
    return 0;
}
