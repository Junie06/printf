#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <limits.h>
#include <ctype.h>

/**
 * struct print_format - user-defined data type containing a char and
 * function pointer
 * @symbol: first member
 * @func: function pointer
 *
 * Description: this is a user defined data type, that contains two memebers,
 * in which the char symbol will contain characters and the function pointer,
 * is a pointer to a function.
 */
typedef struct print_format
{
	char *symbol;
	int (*func)();
} prt;

int _printf(const char * const format, ...);
int print_char(va_list val);
int print_string(va_list val);
int print_mod(void);
int unsigned_number_to_string(uint64_t number, int base, char *buffer);
void number_to_string(int64_t number, int base, char *buffer);
int print_formatted_integer(int number);
int print_int(va_list val);
int print_bin(va_list val);
int print_unsigned_int(va_list val);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);

#endif
