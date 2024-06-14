/*
 * Ejercicio 1-17. Escriba un programa que imprima todas las líneas de
 * entrada que sean mayores de 80 caracteres.
 */

#include <stdio.h>

#define MAXLINE 1000 /* tamaño máximo de líneas de entrada */

/* get_line: declaración de la función para leer líneas */
int get_line(char line[], int maxline);

/* imprime todas las líneas con mas de 80 caracteres de longitud */
int main() {
	int len; /* longitud actual de la línea */
	char line[MAXLINE]; /* línea de entrada actual */


	while ((len = get_line(line, MAXLINE)) > 0) {
		if (len > 80) {
			printf("%s", line);
		}
	}

	return 0;
}

/* get_line: lee una linea en s, regresa su longitud */
int get_line(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return i;
}

