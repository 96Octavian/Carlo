#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main() {
	/* Stringa da controllare */
	char palindromo[] = "aro un         autodromo o mordo tua nuora";

	/* Flag di controllo: se rimane 1 (TRUE) la stringa � palindroma */
	int pal = 1;

	/* Facciamo un ciclo partendo con un indice dall'inizio e con l'altro alla fine
	   Uno cresce e l'altro decresce
	   Ci fermiamo quando si incontrano (nel mezzo) */
	for (int i = 0, j = strlen(palindromo) - 1; i < j; ++i, --j) {
		
		/* Ignoriamo gli spazi: se li incontriamo ci spostiamo avanti */
		while (palindromo[i] == ' ') {
			++i;
		}

		/* Ignoriamo gli spazi: se li incontriamo ci spostiamo indietro */
		while (palindromo[j] == ' ') {
			--j;
		}

		/* Controlliamo: se anche una sola lettera � diversa, non � palindromo */
		if (palindromo[i] != palindromo[j]) {
			pal = 0;
			break;
		}
	}

	/* Controlliamo il flag e stampiamo di conseguenza */
	if (pal)
		printf("La stringa � palindroma\n");
	else
		printf("La stringa non � palindroma\n");

	system("pause");
}