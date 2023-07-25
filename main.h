#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <limits.h>
#include <ctype.h>
#include "helper_functions.h"

/**
 * Functions to print output
 */

int print_char(char ch);
int print_string(const char *str);
int print_specifier(char specifier, va_list args);
int unsigned_number_to_string(uint64_t number, int base, char *buffer);
void number_to_string(int64_t number, int base, char *buffer);
int print_formatted_integer(int number);


#endif