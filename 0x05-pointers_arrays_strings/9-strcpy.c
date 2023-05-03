#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int w = 0;
	int z = 0;

	while (*(src + l) != '\0')
	{
		w++;
	}
	for ( ; z < l ; z++)
	{
		dest[z] = src[z];
	}
	dest[w] = '\0';
	return (dest);
}

