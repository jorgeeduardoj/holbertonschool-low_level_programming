#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first pointer to swap
 * @b: second pointer to swap
 * Return:  void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
