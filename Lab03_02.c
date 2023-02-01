#include <stdio.h>

int main()
{
    float width= 3, height=5, area, perimeter;
    
    printf("Rectangle width: %f inches \n", width);
    printf("Rectangle height: %f inches \n", height);
    
    area= width*height;
    perimeter= (2*width) + (2*height);
    
    printf("Area of rectangle is: %f square inches \n", area);
    printf("Perimeter of rectangle is: %f inches \n", perimeter);
    return 0;
}
/*to compute area and perimeter of a rectangle with a width of 6.8 in and 2.3 in
change the value of the height and width variables*/
