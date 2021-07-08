#include "holberton.h"

/**
* _memcpy - copies memory area
* @src: source
* @dest: destination
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
