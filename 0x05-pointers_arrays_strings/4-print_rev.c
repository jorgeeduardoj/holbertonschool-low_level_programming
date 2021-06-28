#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: length of a string
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i-1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
