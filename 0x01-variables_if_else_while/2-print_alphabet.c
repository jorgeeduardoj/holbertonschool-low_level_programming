#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	a = 'a';
	while (a <= "z")
	{
		putchar("%c\n", a);
		a++;
	}
	return (0);
}
