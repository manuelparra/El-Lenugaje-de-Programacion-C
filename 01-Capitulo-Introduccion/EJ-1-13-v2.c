/*
 * 1-13. Escriba un programa que imprima el histograma de
 * las longitudes de las palabras de su entrada. Es fácil dibujar el histagrama
 * con las barras horizonttales; la orientación vertical es un reto más
 * interesante. 2da versión.
 */

#include <stdio.h>

#define IN 1 /* dentro de una palabra */
#define OUT 0 /* fuera de una palabra */

int main() {
	int c, nw, mw, state;
	int ndigitw[1000];

	state = OUT;
	nw = 0;

	ndigitw[nw] = 0;

	while ((c = getchar()) != EOF) {
		if (state == IN && (c != ' ' && c != '\n' && c != '\t'))
			ndigitw[nw]++;
		else if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			nw++;
		} else if (state == OUT) {
			state = IN;
			ndigitw[nw] = 1;
		}
	}

	mw = ndigitw[0];

	for (int i = 0; i < nw; i++)
		if (mw < ndigitw[i])
			mw = ndigitw[i];
	
	printf("El número de palabras es: %d.\n", nw);
	printf("La palabra más larga tiene %d caracteres.\n", mw);
	putchar('\n');

	for (int i = mw; i > 0; i--) {
		for (int j = 0; j < nw; j++) {
			if (ndigitw[j] >= i)
				putchar('*');
			else
				putchar(' ');
			putchar(' ');
		}
		putchar('\n');
	}

	putchar('\n');

	return 0;
}

