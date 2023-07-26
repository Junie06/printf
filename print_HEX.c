#include "main.h"

/**
 * print_HEX - function to print unsigned integers
 * and decimals
 * @val: variadic list
 * Return: length of numbers
 */

int print_HEX(va_list val)
{
	int count = 0, i;
	char buf[32];

	unsigned int n = va_arg(val, unsigned int);

	number_to_string(n, 16, buf);

	for (i = 0; buf[i]; i++)
	{
		putchar(toupper(buf[i]));
		count++;
	}
	return (count);
}
