#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2 , len3, len4;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("There is %b bytes in %b KB\n", 1024, 1);
	_printf("%b\n", 1024);
	printf("10000000000\n");
	len3 = _printf("%p", (void *)0x7fff5100b608);
	printf("\n");
	len4 = printf("%p", (void *)0x7fff5100b608);
	printf("\n");
	fflush(stdout);
	if (len3 != len4)
	{
		printf("FAILED %d  %d\n", len3, len4);
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
