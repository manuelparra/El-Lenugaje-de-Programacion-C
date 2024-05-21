/*
 * Ejercicio 1-6. Verifique que la expresión getchar() != EOF es 0 o 1.
 */

#include <stdio.h>

int main () {
	
	int c;

	while ((c = getchar()) != EOF) {
		if (c == 10) continue;
		printf("c = %d\n", c != EOF);
	}

	printf("c = %i\n", c != EOF);

	return 0;
}

