#include <stdio.h>

struct integrantesInspyra
{
	int id;
	char *fullname;
	char *email;
	int age;
	char *city;
};
/* al declarar una estructura puedo crear una variable en el mismo proceso de declaración */
int main(void)
{
	struct integrantesInspyra jorgeEduardo = {02, "Jorge Eduardo Jiménez Álvarez", "jorgeeduardo@inspyra.co", 34, "Manizales"};
	printf("Integrante: %d\n", jorgeEduardo.id);
}