#include <stdio.h>

/* este programa copia la entrada a la salida; la. versión */

int main() {
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);
}

