/*
 * Ejercicio 1.9. Escriba un programa que copie su entrada a la salida,
 * reemplazando cada cadena de uno o mas blancos por un solo blanco.
 */

#include <stdio.h>

int main() {
	int c, prevc;
	prevc = EOF;

	while ((c = getchar()) != EOF) {
		if (c == ' ' && prevc == ' ') 
			continue;

		prevc = c;
		putchar(c);
	}

	return 0;
}

