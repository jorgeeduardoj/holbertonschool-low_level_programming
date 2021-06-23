#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: void
 */
int main(void)
{
	int i, sum;
	int a = 1;
	int b = 0;

	for (i = 0; i < 50; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		sum = a + b;
		printf("%d", sum);
		b = a;
		a = sum;
	}
	printf("\n");
	return (0);
}
