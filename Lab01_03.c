#include <stdio.h>

int main()
{
    int x;
    int a;
    int b;
    int c;
    
    printf("Enter a three digit integer: ");
    scanf("%i", &x);
    
    a=x/100;
    b=(x-(a*100))/10;
    c=(x-(a*100 + b*10))/1;
    
    printf("%i%i%i",c, b,a);

    return 0;
}
