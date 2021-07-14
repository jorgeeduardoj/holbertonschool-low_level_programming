#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: On success 0.
 * On error, other
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 0)
	{
		printf("%d\n", 0);
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
