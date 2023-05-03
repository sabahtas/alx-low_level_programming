#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int lg = 0;

	do {
		lg++;
		s++;
	} while (*s != '\0');

	return (lg);
}

