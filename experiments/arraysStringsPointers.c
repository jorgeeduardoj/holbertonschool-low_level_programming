#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[] = "Hello";
	void *pstr1 = str1;
	char *str2 = str1;
	char *str3 = &str1[1];
	void *pstr3 = str3;
	int len = strlen(str1);

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%p\n", (void *)str2);
	printf("%p\n", pstr1);
	printf("%s\n", str3);
	printf("%c\n", str1[4]);
	printf("%d\n", len);
	printf("%p\n", pstr3);

	return (0);
}
