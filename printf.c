#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */

int _printf(const char * const format, ...)
{
	va_list args;

	int i = 0, j, len = 0;
	prt m[] = {
		{"%s", print_string}, {"%c", print_char}, {"%%", print_mod},
		{"%i", print_int}, {"%d", print_int}, {"%b", print_bin},
		{"%u", print_unsigned_int}, {"%o", print_oct}, {"%x", print_hex},
		{"%X", print_HEX}
	};

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 9;
		while (j >= 0)
		{
			if (m[j].symbol[0] == format[i] && m[j].symbol[1] == format[i + 1])
			{
				len += m[j].func(args);
				i = i + 2;

			}
			j--;
		}
		putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
