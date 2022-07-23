#include "main.h"

/**
 * _strlen - lenght of string
 * @s:char
 * Return:int
 */
int _strlen(char *s)
{
	int i;

		for (i = 0; s[i] != '\0'; i++)
		{
			continue;
		}
return (i);
}

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
	if (s[0] == '\0')
	return (-1);
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

/**
 * print_reverse - prints a string in reverse
 *
 * @ap: list of arguments from _printf
 * Return: length of the printed string
 */
int print_reverse(va_list ap)
{
	char *s;
	int i, count = 0;
	int len;
	char *temp;

	s = va_arg(ap, char *);
	if (s[0] == '\0')
	return (-1);
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
		len = _strlen(s);
		temp = malloc(len + 1);
		if (temp == NULL)
			return (-1);
		for (i = 0; i < len; i++)
		{
			temp[i] = s[len - i - 1];
		}
		temp[len] = '\0';
		_puts(temp);
		free(temp);
		count = _strlen(s);
	}
	return (count);
}
