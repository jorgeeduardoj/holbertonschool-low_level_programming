#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @src: char to change
 * Return: src
 */
char *leet(char *src)
{
	int i;
	int j;
	char alphabet[] = {"AaEeOoTtLl"};
	char code[] = {"4433007711"};

	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (src[i] == alphabet[j])
			{
				src[i] = code[j];
			}
		}
	}
	return (src);
}
