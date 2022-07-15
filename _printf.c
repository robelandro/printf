#include "main.h"

/**
 * printditactor - prints special characters
 * @next: character after the %
 * @arg: argument for the indentifier
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int printditactor(char next, va_list arg)
{
	int index;

	ditacterstruct array_func[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_int},
		{"b", print_unsignedToBinary},
		{"p", print_address},
		{"R", print_rot13},
		{NULL, NULL}
	};

	for (index = 0; array_func[index].indentifier != NULL; index++)
	{
		if (array_func[index].indentifier[0] == next)
			return (array_func[index].printer(arg));
	}
	return (0);
}

/**
 * _printf - mimic printf from stdio
 * Description: produces output according to a format
 * write output to stdout, the standard output stream
 * @format: character string composed of zero or more directives
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 * return -1 for incomplete identifier error
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	int dietactedPrinted = 0, charPrinted = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			charPrinted++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			charPrinted++;
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);

		dietactedPrinted = printditactor(format[i + 1], arg);
		if (dietactedPrinted == -1 || dietactedPrinted != 0)
			i++;
		if (dietactedPrinted > 0)
			charPrinted += dietactedPrinted;

		if (dietactedPrinted == 0)
		{
			_putchar('%');
			charPrinted++;
		}
	}
	va_end(arg);
	return (charPrinted);
}
