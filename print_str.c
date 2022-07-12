#include "main.h"

/**
 * print_str - prints a string.
 * @arg: argument
 * Return: 0
 */
int print_str(va_list arg)
{
int i;
char *str = va_arg(arg, char*);

for (i = 0; str[i]; i++)
{
	_putchar(str[i]);
}

return (0);
}
