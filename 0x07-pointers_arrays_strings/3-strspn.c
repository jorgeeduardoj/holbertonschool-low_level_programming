#include "holberton.h"

/**
* _strspn - gets the length of a prefix substring
* @s: string
* @accept: string to be found
* Return: length
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int length = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				length++;
				break;
			}
		}
	}
	if (length != 0)
	{
		length++;
	}
	return (length);
}
