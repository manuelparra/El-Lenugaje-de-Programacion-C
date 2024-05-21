#include <stdio.h>

#define LOWER 0 // límite inferior de la tabla
#define UPPER 300 // límite superior
#define STEP 20 // tamaño del incremento

/* imprime la tabla Fahrenheit-Celsius */

int main() {
	int fahr;

	printf("%4s\t%7s\n", "Fahr", "Celsius");

	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
		printf("%4d\t%7.1f\n", fahr, (5.0/9.0) * (fahr - 32));

	return 0;
}

