#include "main.h"

/**
 * print_oct - function to print unsigned integers
 * and decimals
 * @val: variadic list
 * Return: length of numbers
 */

int print_oct(va_list val)
{
	char buf[32];
	int count = 0, i;

	unsigned int n = va_arg(val, unsigned int);

	number_to_string(n, 8, buf);

	for (i = 0; buf[i]; i++)
	{
		putchar(buf[i]);
		count++;
	}
	return (count);
}
