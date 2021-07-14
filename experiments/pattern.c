#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n, i, j, k;

	scanf("%d", &n);
	for (k = 0; k <= n; k++)
	{
		for (i = k; i < ((n * 2) - 1 - k); i++)
		{
			for (j = k; j < ((n * 2) - 1 - k); j++)
			{
				if (j == (n * 2) - 2)
				{
					printf("%d\n", n);
				}
				else
				{
					printf("%d ", n - k);
				}
			}
		}
	}
	return 0;
}
