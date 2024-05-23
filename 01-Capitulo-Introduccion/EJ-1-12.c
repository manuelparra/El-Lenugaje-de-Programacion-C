/*
 * Escriba un programa que imprima su entrada una palabra por línea.
 */

#include <stdio.h>

#define IN 1 /* en una palabra */
#define OUT 0 /* fuera de una palabra */

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t')
			putchar('\n');
		else
			putchar(c);
	}

	return 0;
}

