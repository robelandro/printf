#include "main.h"

/**
 * print_address - address of the given pointer
 *
 * @ap: pointer to the argument list
 * Return: number of character printed
 */
int print_address(va_list ap)
{
	long int p, dec;
	int i = 0, j, count = 2;
	char tmp[1024];

	p = va_arg(ap, long int);
	if (p < 0)
	{
		loop_print("0xffffffffffffffff");
		return (18);
	}
	if (!p)
	{
		loop_print("(nil)");
		return (5);
	}
	else
	{
		_putchar('0');
		_putchar('x');
		while (p)
		{
			dec = p % 16;
			if (dec > 9)
				tmp[i] = (dec % 10) + 'a';
			else
				tmp[i] = dec + '0';
			p /= 16;
			i++;
		}

		for (j = i - 1; j >= 0; j--)
		{
			_putchar(tmp[j]);
			count++;
		}
	}
	return (count);
}
