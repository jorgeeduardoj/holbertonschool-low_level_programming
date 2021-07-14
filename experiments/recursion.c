#include <stdio.h>

int factorial(int n)
{
	int retval = 1;

	if (n != 1)
	{
		retval = n * factorial(n - 1);
	}
	return (retval);
}

int main(void)
{
	int val = factorial(10);
	printf("10! = %d\n", val);
}
