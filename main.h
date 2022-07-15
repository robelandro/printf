#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int print_int(va_list arg);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
void print_binary(unsigned int n, unsigned int *printed);
int print_unsignedToBinary(va_list arg);
int printditactor(char next, va_list arg);
int print_address(va_list ap);
void loop_print(char *a);
int print_rot13(va_list l);

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
