#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * File : Variadic functions.
 * Description: Contains all protoptypes of variadic functions.
 *
 */

#include <stdarg.h>

/*
 * Struct pointer - A new struct type defining a printer.
 * @symbol : a symbol representing a data type.
 * @print: A function that prints a data type corresponding to te symbol.
 *
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);


#endif
