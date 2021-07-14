#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 54325;

	printf("a = %d\n", (a / 10000) + ((a / 1000) % 10) + ((a / 100) % 10) + ((a / 10) % 10) + (a % 10));

	printf("a = %d\n", a % 10);
	printf("a = %d\n", a % 100);
	printf("a = %d\n", a % 1000);
	printf("a = %d\n", a % 10000);
	printf("a = %d\n", a / 10);
	printf("a = %d\n", a / 100);
	printf("a = %d\n", a / 1000);
	printf("a = %d\n", a / 10000);
}
