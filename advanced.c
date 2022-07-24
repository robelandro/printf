#include "main.h"

/**
 * print_unsigned_int - prints an unsigned int
 *
 * @ap: argument list
 * Return: number of characters printed
 */
int print_unsigned_int(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	int i = 0, j = 0;
	char *str = malloc(sizeof(char) * 11);

	if (str == NULL)
		return (-1);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n != 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	for (j = i - 1; j >= 0; j--)
		_putchar(str[j]);
	free(str);
	return (i);
}

/**
 * print_hex - prints an unsigned int in hex
 *
 * @ap: argument list
 * Return: number of characters printed
 */
int print_hex(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	int i = 0, j = 0;
	char *str = malloc(sizeof(char) * 11);

	if (str == NULL)
		return (-1);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n != 0)
	{
		if (n % 16 > 9)
			str[i] = (n % 16) + 'a' - 10;
		else
			str[i] = n % 16 + '0';
		n = n / 16;
		i++;
	}
	str[i] = '\0';
	for (j = i - 1; j >= 0; j--)
		_putchar(str[j]);
	free(str);
	return (i);
}

/**
 * print_HEX - prints an unsigned int in HEX
 *
 * @ap: argument list
 * Return: number of characters printed
 */
int print_HEX(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	int i = 0, j = 0;
	char *str = malloc(sizeof(char) * 11);

	if (str == NULL)
		return (-1);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n != 0)
	{
		if (n % 16 > 9)
			str[i] = (n % 16) + 'A' - 10;
		else
			str[i] = n % 16 + '0';
		n = n / 16;
		i++;
	}
	str[i] = '\0';
	for (j = i - 1; j >= 0; j--)
		_putchar(str[j]);
	free(str);
	return (i);
}

/**
 * print_oct - prints an unsigned int in octal
 *
 * @ap: argument list
 * Return: number of characters printed
 */
int print_oct(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	int i = 0, j = 0;
	char *str = malloc(sizeof(char) * 11);

	if (str == NULL)
		return (-1);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n != 0)
	{
		str[i] = n % 8 + '0';
		n = n / 8;
		i++;
	}
	str[i] = '\0';
	for (j = i - 1; j >= 0; j--)
		_putchar(str[j]);
	free(str);
	return (i);
}
