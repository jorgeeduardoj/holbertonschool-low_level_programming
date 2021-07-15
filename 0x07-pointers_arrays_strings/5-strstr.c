#include "holberton.h"

/**
* _strstr - finds the first occurrence of the substring
* @haystack: string
* @needle: substring to be found
* Return: substring
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;
	int length;

	for (j = 0; needle[j]; j++)
	{
		;
	}
	length = j;
	for (i = 0; haystack[i]; i++)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			p = &haystack[i];
			for (; needle[j] == haystack[i]; j++)
			{
				if (j == length - 1)
				{
					return (p);
				}
				i++;
			}
		}
	}
	return (0);
}
