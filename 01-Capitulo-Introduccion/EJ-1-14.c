/*
 * Ejercicio 1-14. Escriba un programa que imprima el histograma de las
 * frecuencias con que se presentan diferentes caracteres leídos a la entrada
 */

#include <stdio.h>
#define YES 1
#define NO 0

int main() {
	int i, j;
	int c, nc, mno;
	int inputs[54], cinputs[54];
	int match;

	nc = 0;
	mno = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t')
			continue;

		match = NO;

		for (i = 0; i < nc; i++) {
			if (inputs[i] == c) {
				cinputs[i]++;
				match = YES;
			}
		}

		if (!match) {
			inputs[nc] = c;
			cinputs[nc] = 1;
			nc++;
		}
	}

	for (i = 0; i < nc; i++)
		if (cinputs[i] > mno)
			mno = cinputs[i];

	printf("EL número de caracteres es %d.\n", nc);
	printf("La mayor fruecuencia de ocurrencias es: %d.\n", mno);
	putchar('\n');

	for (i = mno; i > 0; i--) {
		for (j = 0; j < nc; j++) {
			if (cinputs[j] >= i)
				putchar('*');
			else
				putchar(' ');
			
			putchar(' ');
		}
		putchar('\n');
	}

	for (i = 0; i < nc; i++) {
		putchar(inputs[i]);
		putchar(' ');
	}
	
	putchar('\n');
	putchar('\n');
	
	return 0;
}

