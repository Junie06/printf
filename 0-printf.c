#include "main.h"

/**
 * _printf - custom print function that will emulate the
 * behaviour of standard library printf function and will
 * handle conversion specifiers such as c, s, %
 * @format: it is the last preceeeding argument before the
 * variadic function
 * Return: the length of the characters printed
 *
 * State:
 * 0: regular
 * 1: escape
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int state = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (state == 0)
		{
			{
				if (*format == '%')
				{
					state = 1;
				}
				else
				{
					count += print_char(*format);
				}

			}
		}
		else if (state == 1)
		{
			count += print_specifier(*format, args);
			state = 0;
		}
		format++;
	}
	va_end(args);
	return (count);
}
