/*
* 1-13. Escriba un programa que imprima el histograma de
* las longitudes de las palabras de su entrada. Es fácil dibujar el histagrama
* con las barras horizonttales; la orientación vertical es un reto más
* interesante.
*/

#include <stdio.h>

#define IN 1 /* en una palabra */
#define OUT 0 /* fuera de una palabra */

int main() {
	int c, cw, state;
	int ndigitw[1000];

	state = OUT;
	cw = 0;
	ndigitw[cw] = 0;

	while ((c = getchar()) != EOF) {
		if (state == IN && (c != ' ' && c != '\n' && c != '\t'))
			ndigitw[cw]++;
		else if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			cw++;
		} else if (state == OUT) {
			state = IN;
			ndigitw[cw] = 0;
		}
	}
	
	printf("El número de palabras es: %d\n", cw);
	putchar('\n');
	
	for (int i = 0; i < cw; i++) {
		for (int j = 0; j <= ndigitw[i]; j++)
			putchar('*');

	  putchar('\n');
	}

	putchar('\n');

	return 0;
}

