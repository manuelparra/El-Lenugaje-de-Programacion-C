/*
 * Modifique el programa de conversión de temperaturas de manera que escriba la
 * tabla en orden inverso, esto es, desde 300 grados hasta 0.
 */

#include <stdio.h>

int main() {
	int fahr;

	printf("%4s\t%7s\n", "Fahr", "Celsius");
	for (fahr = 300; fahr >= 0; fahr -= 20)
		printf("%4d\t%7.1f\n", fahr, (5.0/9.0) * (fahr -32));

	return 0;
}
