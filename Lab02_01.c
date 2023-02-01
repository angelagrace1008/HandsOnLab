#include <stdio.h>

int main()
{
    float num;
    
    printf("ENTER A NUMBER: ");
    scanf("%f", &num);
    printf("The number matches condition ");
    
    if (num>=3 && num<8.75)
    {
        printf("A, ");
    }
    else
    {
        printf("not A, ");
    }
    
    if (num<3 || (num>5.4 && num<=7.3) || num>13)
    {
        printf("B, ");
    }
    else
    {
        printf("not B, ");
    }
    
    if (num!=3 && num<9.75)
    {
        printf("C.");
    }    
    else
    {
        printf("not C.");
    }
   
    return 0;
}