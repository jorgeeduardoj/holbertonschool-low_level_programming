#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int length;

	while (str[i] != '\0')
	{
		i++;
	}
	length = i - 1;
	if (length % 2 != 0)
	{
		length = (length + 1) / 2;
	}
	else
	{
		length = (length / 2) + 1;
	}

	for (i = length; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
