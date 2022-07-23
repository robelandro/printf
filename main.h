#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
void _puts(char *a);
int print_int(va_list arg);
int print_char(va_list arg);
int print_str(va_list arg);
void print_binary(unsigned int n, unsigned int *printed);
int print_unsignedToBinary(va_list arg);
int printditactor(char next, va_list arg);
int print_address(va_list ap);
int print_rot13(va_list l);
int print_unsigned_int(va_list ap);
int print_hex(va_list ap);
int print_HEX(va_list ap);
int print_oct(va_list ap);
int print_reverse(va_list ap);

/**
 * struct ditacterstruct - structure definition of a printTypeStruct
 * @indentifier: type
 * @printer: function to print
 */
typedef struct ditacterstruct
{
char *indentifier;
int (*printer)(va_list);
} ditacterstruct;

#endif
