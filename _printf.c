#include <stdlib.h>
#include <stdarg.h>
#include <main.h>

/**
 * printIdentifiers - prints special characters
 * @next: character after the %
 * @arg: argument for the indentifier
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

printIdentifier(const char next, va_list args)
{
	int functnsIndex;

	specifierStruct functns[] = {
		{"s", print_str},
		{"c", print_char},
		{"i", print_int},
		{"d", print_int},
		{"b", print_unsignedToBinary},
		{NULL, NULL}
	};
	for (i = 0;functns[functnsIndex] ; i++)
	{
		if (functns[functnsIndex].indentifier[0] == next)
			return (functns[functnsIndex].printer(args));
	}
	return (0);
}
/**
 * _printf - mimic printf from stdio
 * Description: produces output according to format speciers
 * @format: character string composed of zero or more directives
 *
 * Return: returns number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, charPrinted = 0, indentifierPrinted = 0;

	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (forma[i] != '%')
		{
			_putchar(format[i]);
			i++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar(format[i + 1]);
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
		{
			return (-1);
		}

		identifierPrinted = printIdentifier(format[i + 1], args);

		if (identifierPrinted == -1 || identifierPrinted != 0)
		{
			i++;
		}
		if (identifierPrinted > 0)
		{
			charPrinted += identifierPrinted;
		}
		if (identifierPrinted == 0)
		{
			_putchar('%');
			charPrinted++;
		}
	}
	va_end(args);

	return (charPrinted);
}
