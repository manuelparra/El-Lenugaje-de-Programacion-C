/*
 * Ejercicio 1-18. Escriba un programa que elimine los blancos y los
 * tabuladores que estén al final de cada línea de entrada, y que borre
 * completamente las líneas en blanco.
 */

#include <stdio.h>

#define MAXLINE 1000 /* tamaño maximo de línea */

/* declaración de la función get_new_line */
int get_new_line(char line[], int maxline);

int main() {
	int i, len; /* longitud de la lína actual */
	char line[MAXLINE]; /* linea de entrada actual */

	while ((len = get_new_line(line, MAXLINE)) > 0) {
		for (i = len - 1; line[i] != ' ' && line[i] != '\t' && line[i] != '\n' ; --i) {
			if (i < (MAXLINE - 1)) {
				line[i + 1] = '\n';
				line[i + 2] = '\0';
			}
		}

		for (i = 0; line[i] != '\0'; ++i)
			printf("%c", line[i]);
	}

	return 0;
}

/* definición de la función get_new_line: lee una lines en s, regresa su longitud */
int get_new_line(char s[], int lim) {
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

