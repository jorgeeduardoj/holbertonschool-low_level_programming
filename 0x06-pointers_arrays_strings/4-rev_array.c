#include "holberton.h"
/**
 * reverse_array - compare two strings
 * @a: reverese
 * @n: reverse
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int k = 0;
	int tem[1000];

	for (i = 0; i < n; i++)
	{
		tem[i] = a[i];
	}
	for (j = n; j >= 0; j--)
	{
		a[k] = tem[j];
	}
}
