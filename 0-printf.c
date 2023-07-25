#include "helper_functions.h"

/**
 * _printf - custom print function that will emulate the
 * behaviour of standard library printf function and will
 * handle conversion specifiers such as c, s, %
 * @format: it is the last preceeeding argument before the
 * variadic function
 * Return: the length of the char acters printed
 *
 * State:
 * 0: regular
 * 1: escape
 */

int _printf(const char *format, ...)
{
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_list args;
	int count = 0;
	int state = 0;

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

/**
 * main - prints output to std using _printf function
 * Return: number of characters
 */

int main(void)
{
	int len = _printf("Let's try to printf a simple sentence.\n");
	int len2 = printf("Let's try to printf a simple sentence.\n");

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	return (0);
}
