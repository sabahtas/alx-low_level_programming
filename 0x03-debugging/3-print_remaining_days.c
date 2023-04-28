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

void print_remaining_days(int mn, int d, int yr)
{
if ((yr % 100 == 0 && yr % 400 == 0) || (yr % 4 == 0))
{
if (mn > 2 && d >= 60)
{
d++;
}
printf("Day of the year: %d\n", d);
printf("Remaining days: %d\n", 366 - d);
}
else
{
if (mn == 2 && d == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", mn, d - 31, yr);
}
else
{
printf("Day of the year: %d\n", d);
printf("Remaining days: %d\n", 365 - d);
}
}
}
