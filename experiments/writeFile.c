#include <stdio.h>

int main()
{
	FILE *fpointer = fopen("creadoDesdeC.txt", "a");

	fprintf(fpointer, "\nthis is text to learn\nmore text to learn");

	fclose(fpointer);
	return 0;
}