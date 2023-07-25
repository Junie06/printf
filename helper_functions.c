#include "main.h"
/**
 * print_char - helper function to print characters
 * @ch: character to print
 * Return: 1
 */

int print_char(char ch)
{
	putchar(ch);
	return (1);
}

/**
 * print_string - helper function to print strings
 * @str: string to print
 * Return: length of string
 */

int print_string(const char *str)
{
	int count = 0;

	if (!str)
		str = "(null)";
	while (str[count])
	{
		putchar(str[count]);
		count++;
	}
	return (count);
}

/**
 * print_specifier - helper function to handle conversion specifiers
 * @specifier: conversion specifier
 * @args: variadic function list
 * Return: number of characters printed
 */

int print_specifier(char specifier, va_list args)
{
	int count = 0;

	switch (specifier)
	{
		case 'c':
			{
				count += print_char(va_arg(args, int));
				break;
			}
		case 's':
			{
				count += print_string(va_arg(args, const char *));
				break;
			}
		case '%':
			{
				count += print_char('%');
				break;
			}
			break;
	}
	return (count);
}
