#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int lg = 0;
	int x = 0;
	char *z = str;
	int o;

	while (*z != '\0')
	{
		z++;
		lg++;
	}
	x = lg - 1;
	for (o = 0 ; o <= x ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

