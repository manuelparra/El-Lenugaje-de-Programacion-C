#include <stdio.h>

/* cuenta los caracteres de la entrada. 2da versión. */

int main() {
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;

	printf("%.0f\n", nc);

	return 0;
}

