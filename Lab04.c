#include <stdio.h>

int main()
{
    short int num;
    float num2;
    
    short int *a;
    float *b;
    
    a=&num;
    b=&num2;
    
    /* 2. Of what use is the sizeof() operator?
        The sizeof() operator determines the size of the expression or the data type specified. */
        
    /* 3. In a given operating system, a pointer to a short int is 32 bits wide. How wide is a pointer
        to a long int in this same system?
        In a system, the pointers are all of the same size iregardless of what they point to so a long int
        pointer would also be 32 bits wide*/
    
    /* 4. Assume p is a pointer to a float. Further, assume, the value of p is 1000 (i.e., the address of
        the float it points to is 1000). The value of the float is 17.6. What value is p++? Define in
        words what *p and &p mean. Is there a way to determine the values of *p and &p given
        the info above? 
        The increment on the pointer, p++, would result in 1004, the address of the “next float” because floats are 4 bytes in size.
        *p is called value at address and it means the value at the location given by p, or 1000 for this specific case.
        &p is called the address of as it indicates the address of the pointer itself.*/
        
    /* 5. Given the initializations and memory map at the top, fill out the memory map on the bottom after the code has executed.
            Assume pointers are 32 bits wide.
            long int x=100;
            long int *y;
            long int **z;
            y=&x;
            z=&y;
            x++;
            *y=*y++;
            *z=*z++;
            z++;
            
                         top --------------
                             |             |
                             |             |
                             |             |
                             |             |
                             |             |
                             |             |
                             --------------
                        8000 |   101       | x
                             --------------
                             |             |
                             --------------
                        5000 |   8004      | y
                             --------------
                             |             |
                             --------------
                        2000 |   5008      | z
                             --------------
                             |             |
                             -------------- */
}