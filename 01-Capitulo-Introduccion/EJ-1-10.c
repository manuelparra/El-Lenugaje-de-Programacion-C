/*
* Ejercicio 1.10. Escriba un programa que copie su entrada a la salida,
* reemplazando cada tabulador por \t, cada espacio en blanco por \b y cada
* diagonal invertida por \\. Esto hace que los espacios y las tabulaciones sean
* visibles sin confusiones.
*/

#include <stdio.h>

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		} else if (c == ' ') {
			putchar('\\');
			putchar('b');
		} else {
			putchar(c);
		}
	}

	return 0;
}

