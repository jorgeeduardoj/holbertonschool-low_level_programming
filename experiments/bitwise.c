#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int n, int k)
{
	int a[n], i, j;
	int b = 0;
	int c = 0;
	int d = 0;

	for (i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (((a[i] & a[j]) >= b) && ((a[i] & a[j]) < k))
			{
				b = (a[i] & a[j]);
			}
			if (((a[i] | a[j]) >= c) && ((a[i] | a[j]) < k))
			{
				c = (a[i] | a[j]);
			}
			if (((a[i] ^ a[j]) >= d) && ((a[i] ^ a[j]) < k))
			{
				d = (a[i] ^ a[j]);
			}
		}
	}
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
}

int main()
{
	int n, k;

	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);
	return 0;
}
