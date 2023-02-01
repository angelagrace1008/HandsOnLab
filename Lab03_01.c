#include <stdio.h>

void inspect(char userinput)
{
    if (userinput>= 'A' && userinput<='Z')
    {
        printf("%c is UPPERCASE ALPHABET CHARACTER", userinput);
    }
    
    else if (userinput>='a' && userinput<='z')
    {
        printf("%c is a LOWERCASE ALPHABET CHARACTER", userinput);
    }
    
    else if (userinput>='0' && userinput<='9')
    {
        printf("%c is a NUMERIC CHARACTER", userinput);
    }
    
    else
    {
        printf("%c is NOT AN ALPHANUMERIC CHARACTER", userinput);
    }
}
int main()
{
    char userinput;
    printf("ENTER A CHARACTER: ");
    scanf("%c", &userinput);
    
    inspect(userinput);

    return 0;
}
