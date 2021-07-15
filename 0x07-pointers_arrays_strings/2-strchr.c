#include "holberton.h"

/**
* _strchr - locates a character in a string
* @s: string
* @c: character to be found
* Return: char*
*/

char *_strchr(char *s, char c)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	i++;
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			return (&s[j]);
		}
	}
	return (0);
}
