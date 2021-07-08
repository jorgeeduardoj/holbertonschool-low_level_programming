#include "holberton.h"

/**
* _memcpy - copies memory area
* @s: string
* @b: digit
* @n: number of bytes
* Return: char*
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
