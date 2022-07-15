#include "main.h"

/**
 * print_rot13 - prints a string using rot13
 * @l: list of arguments from _printf
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_rot13(va_list l)
{
	char *s;
	int i, count = 0;

	s = va_arg(l, char *);
	if (s == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		count = 5;
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				_putchar((s[i] - 'A' + 13) % 26 + 'A');
				count++;
			}
			else if (s[i] >= 'a' && s[i] <= 'z')
			{
				_putchar((s[i] - 'a' + 13) % 26 + 'a');
				count++;
			}
			else
			{
				_putchar(s[i]);
				count++;
			}
		}
	}
	return (count);
}
