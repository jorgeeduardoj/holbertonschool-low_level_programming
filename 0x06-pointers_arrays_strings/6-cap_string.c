#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @a: char to change
 * Return: char*
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z' && (a[i - 1] <= 32 || a[i - 1] == 46))
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
