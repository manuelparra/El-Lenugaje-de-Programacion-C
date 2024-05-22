/*
 * Ejercicio 1.8. Escriba un programa que cuente espacios en blanco,
 * tabuladores y nuevas líneas.
 */

#include <stdio.h>

int main() {
	int c, nb, nt, nl;
	nb = 0;
	nt = 0;
	nl = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++nb;
		if (c == '\t') // tabulador
			++nt;
		if (c == '\n') // nueva linea
			++nl;
	}

	printf("Espacios en blanco: %d\n", nb);
	printf("Tabulador(e): %d\n", nt);
	printf("Nuevas lineas: %d\n", nl);

	return 0;
}

