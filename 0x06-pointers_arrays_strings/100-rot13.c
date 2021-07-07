#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @src: char to change
 * Return: src
 */
char *rot13(char *src)
{
	int i;
	int j;
	char first[] = {"AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"};
	char code[] = {"NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm"};

	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; first[j] != '\0'; j++)
		{
			if (src[i] == first[j])
			{
				src[i] = code[j];
                break;
			}
		}
	}
	return (src);
}
