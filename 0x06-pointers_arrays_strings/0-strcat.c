#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @src: first 
 * @dest: second
 * Return: char*
 */
char *_strcat(char *dest, char *src)
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
	j = 0;
	for (; i <= lengthsrc + lengthdest; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
