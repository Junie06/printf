#include "main.h"

/**
 * print_int - function to print integers
 * and decimals
 * @val: variadic list
 * Return: length of numbers
 */

int print_int(va_list val)
{
	char buf[32];
	int count = 0, i;
	int n = va_arg(val, int);

	number_to_string(n, 10, buf);

	for (i = 0; buf[i]; i++)
	{
		putchar(buf[i]);
		count++;
	}

	return (count);
}

/**
 * unsigned_number_to_string - function to convert unsigned
 * numbers to various bases
 * @number: number to be converted
 * @base: base to which to convert
 * @buffer: temporary placeholder for converted numbers
 * Return: length of numbers
 */

int unsigned_number_to_string(uint64_t number, int base, char *buffer)
{
	char buf[65] = {0};
	int cur = 0, i;

	if (number == 0)
	{
		buffer[0] = '0';
		buffer[1] = '\0';
		return (0);
	}


	while (number > 0)
	{
		int digit = number % base;

		if (digit >= 10)
		{
			buf[cur++] = 'a' + (digit - 10);
		}
		else
		{
			buf[cur++] = '0' + digit;
		}
		number /= base;
	}

	for (i = cur - 1; i >= 0; i--)
		*buffer++ = buf[i];
	*buffer = '\0';

	return (cur);
}

/**
 * number_to_string - function to convert signed numbers to various bases
 * @number: number to be converted
 * @base: base to which to convert
 * @buffer: temporary placeholder for converted numbers
 */
void number_to_string(int64_t number, int base, char *buffer)
{
	if (number < 0)
	{
		*buffer++ = '-';
		number = -number;
	}
	unsigned_number_to_string(number, base, buffer);
}
