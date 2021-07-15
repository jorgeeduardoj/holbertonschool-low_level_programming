#include <stdio.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 8};
	int *p = a;
	int b[2][3] = {{2, 3, 6},
								 {4, 5, 8}};
	int c[3][2][2] = {{{2, 5}, {7, 9}},
										{{3, 4}, {6, 1}},
										{{0, 8}, {11, 13}}};

	printf("%p %p %p %p\n", c, *c, c[0], &c[0][0]);
	// printf("%p\n", b);
	// printf("%d\n", *(b[1] + 2));
	// printf("%p\n", b + 1);
	// printf("%d\n", a[1]);
	// printf("%p\n", a);
	// printf("%p\n", p);
	// printf("%d\n", *p);
	// printf("%p\n", &a[0]);
	// printf("%p\n", &a[1]);
	// printf("%p\n", &a[4]);
	// printf("%d\n", a[4]);
	return (0);
}