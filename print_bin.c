#include "main.h"

/**
 * print_bin - function to print unsigned integers
 * and decimals
 * @val: variadic list
 * Return: length of numbers
 */

int print_bin(va_list val)
{
	int count = 0, i;
	char buf[32];

	int n = va_arg(val, int);

	number_to_string(n, 2, buf);

	for (i = 0; buf[i]; i++)
	{
		putchar(buf[i]);
		count++;
	}
	return (count);
}
