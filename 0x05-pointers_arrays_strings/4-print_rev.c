#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int lg = 0;
	int o;

	while (*s != '\0')
	{
		lg++;
		s++;
	}
	s--;
	for (o = lg; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

