#include "main.h"

/**
 * print_pointer - function to print pointer
 * and decimals
 * @val: variadic list
 * Return: length of numbers
 */

int print_pointer(va_list val)
{
	int count = 0, i;
	char buf[32];
	void *n = va_arg(val, void *);

	putchar('0');
	putchar('x');

	unsigned_number_to_string((uint64_t) n, 16, buf);

	for (i = 0; buf[i]; i++)
	{
		putchar(buf[i]);
		count++;
	}
	return (count);
}
