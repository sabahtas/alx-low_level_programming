#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int m, n, lg;

	lg = 0;

	for (m = 0; str[m] != '\0'; m++)
		lg++;

	n = (lg / 2);

	if ((lg % 2) == 1)
		n = ((lg + 1) / 2);

	for (m = n; str[m] != '\0'; m++)
		_putchar(str[m]);
	_putchar('\n');
}

