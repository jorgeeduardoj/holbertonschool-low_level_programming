#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @src: first string to concatenate
 * @dest: second string to concatenate
 * @n: number of characters to concatenate
 * Return: char*
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int lengthsrc, lengthdest;

	while (dest[i] != '\0')
	{
		i++;
	}
	lengthdest = i;
	while (src[j] != '\0')
	{
		j++;
	}
	lengthsrc = j;
	if (lengthsrc > n)
	{
		lengthsrc = n;
	}
	j = 0;
	for (; i < lengthsrc + lengthdest; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
