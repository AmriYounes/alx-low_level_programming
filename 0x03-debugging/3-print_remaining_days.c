#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    int isLeapYear = 0;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                isLeapYear = 1;
            }
        }
        else
        {
            isLeapYear = 1;
        }
    }

    if (isLeapYear && month > 2)
    {
        if (day >= 60)
        {
            day++;
        }
    }

    int totalDays = isLeapYear ? 366 : 365;
    int remainingDays = totalDays - day;

    if (month == 2 && day == 60 && isLeapYear)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
    }
    else
    {
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", remainingDays);
    }
}
