#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 0 on success and -1 error and errno is set appropiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
