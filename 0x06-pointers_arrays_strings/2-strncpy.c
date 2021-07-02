#include "holberton.h"
/**
 * _strncpy - copies a string
 * @src: first string to concatenate
 * @dest: second string to concatenate
 * @n: number of characters to concatenate
 * Return: char*
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
