#include "main.h"

/**
 * print_char - function to print characters
 * @val: variadic list
 * Return: 1
 */

int print_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	putchar(s);
	return (1);
}

/**
 * print_string - function to print a string
 * @val: variadic list
 * Return: length of numbers
 */

int print_string(va_list val)
{
	int count = 0;
	const char *sng  = va_arg(val, char *);

	while (*sng != '\0')
	{
		putchar(*sng++);
		count++;
	}
	return (count);
}
