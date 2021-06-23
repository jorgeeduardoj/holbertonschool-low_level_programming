#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: void
 */
int main(void)
{
	long int i, sum;
	long int a = 1;
	long int b = 0;

	for (i = 0; i < 50; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		sum = a + b;
		printf("%ld", sum);
		b = a;
		a = sum;
	}
	printf("\n");
	return (0);
}
