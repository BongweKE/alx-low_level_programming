#include <stdio.h>
#include "main.h"

/**
 * year_type - find leap years
 * @year: the year
 * Return: 1 if is a leap year, 0 if not
 */
int year_type(int year)
{
	int is_leap;

	/**
	 * use is_leap to control flow
	 * first check if it's divisible by 4
	 * then check if divisible by 100 but not 400 then not a leap
	 * else is leap year
	 */
	if (year % 4 == 0)
	{
		if ((year % 100 == 0) && (year % 400 != 0))
		{
			is_leap = 0;
		}
		else
		{
			is_leap = 1;
		}
	}
	else
	{
		is_leap = 0;
	}
	return (is_leap);
}

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
	int is_leap;

	is_leap = year_type(year);
	/**
	 * once we know if it's leap or not
	 * We can determine how to treat it
	 */
	if (is_leap)
	{
		if (month >= 2 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n",
			       month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
