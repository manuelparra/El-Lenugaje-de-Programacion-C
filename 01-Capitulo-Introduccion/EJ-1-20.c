/*
 * Ejercicio 1-20. Escriba un programa detab que reemplace tabuladores de la
 * entrada con el número apropiado de blancos para espaciar hasta el siguiente
 * paro de tabulación. Considere un conjunto fijo de paros de tabulación,
 * digamos cada n columnas.
 */

#include <stdio.h>

#define NSPACE 4 /* número de espación por carada tab */
#define MAXLINE 1000 /* máxima cantidad de caracteres por línea */

/* declaración de la función get_new_line */
int get_new_line(char line[], int maxline);

/* declaración de al función detab */
void detab (char s[], char fs[], int len, int nspace);

int main() {
	int len; /* almacena la cantidad de caracteres de la línea actual */
	char line[MAXLINE]; /* almacena la línea actual */
	char fline[MAXLINE]; /* almacena la línea resultante */

	while ((len = get_new_line(line, MAXLINE)) > 0) {
		detab(line, fline, len, NSPACE);
	}

	return 0;
}

/* definición de get_new_line: lee una linea en s, y devuelve su longitud */
int get_new_line(char s[], int maxline) {
	int c, i;

	for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return i;
}

/* definición de la función detab: recorre un array y sustiye tabuladeres por espacios en blaco */
void detab(char s[], char fs[], int len, int nspace) {
	int i, j, k;
	
	for (i = 0, j = 0; i <= len; ++i) {
		if (s[i] == '\t') {
			for (k = 0; k < nspace; ++k) {
				fs[j] = ' ';
				++j;
			}
		} else {
			fs[j] = s[i];
			++j;
		}
	}

	fs[j] = '\0';

	printf("%s", fs);
}

