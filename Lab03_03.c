#include <stdio.h>

int isLeapYear(int year)
{
    if (year%100==0 && year%400!=0)
    {
        printf("%i is not a leap year", year);
    }
    else if (year%400==0 || year%4==0)
    {
        printf("%i is a leap year", year);
    }
    else
    {
        printf("%i is not a leap year", year);
    }
}

int numberOfDays(int month, int year)
{
    if (year%100==0 && year%400!=0)
    {
        if (month==4 || month==6 || month==8 || month==11)
        {
            printf("Month %i of %i has 30 days", month, year);
        }
        else if (month==2)
        {
            printf("Month %i of %i has 28 days", month, year);
        }
        else
        {
            printf("Month %i of %i has 31 days", month, year);
        }
    
    }
    else if (year%400==0 || year%4==0)
    {
        if (month==4 || month==6 || month==8 || month==11)
            {
                printf("Month %i of %i has 30 days", month, year);
            }
        else if (month==2)
            {
                printf("Month %i of %i has 29 days", month, year);
            }
        else
            {
                printf("Month %i of %i has 31 days", month, year);
            }
    }
    else
    {
        if (month==4 || month==6 || month==8 || month==11)
            {
                printf("Month %i of %i has 30 days", month, year);
            }
        else if (month==2)
            {
                printf("Month %i of %i has 28 days", month, year);
            }
        else
            {
                printf("Month %i of %i has 31 days", month, year);
            }
    }
}

int main()
{
    int year, month;
    printf("ENTER A YEAR: ");
    scanf("%i", &year);
    
    printf("ENTER A MONTH (1-12): ");
    scanf("%i", &month);
    numberOfDays(month, year);
    return 0;
}
