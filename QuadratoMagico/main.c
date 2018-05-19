/* Creazione randomica di matrici finché non produce un quadrato magico
 * fatto da righe e colonne i cui elementi hanno somma costante
 * uguale a 1 / 2 * N*(N*N + 1)
 */

#include "../useful.h"

#define N 5

int main() {
	int M[N][N], somma = 0, sbagliato = 0;
	while (1) {

		/* Riempiamo casualmente la matrice */
		randMatrix(N, N, &(M[0][0]), 10, 0);

		/* Stampiamo la matrice */
		printMatrix(N, N, &(M[0][0]));

		/* Controlliamo riga per riga che la somma degli elementi sia costante */
		for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {
				somma += M[i][j];
			}
			if (somma != 1 / 2 * N*(N*N + 1)) {
				sbagliato = 1;
			}
		}

		/* Controlliamo colonna per colonna che la somma degli elementi sia costante */
		for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {
				somma += M[j][i];
			}
			if (somma != 1 / 2 * N*(N*N + 1)) {
				sbagliato = 1;
			}
		}

		/* Controlliamo il  flag e stampiamo di conseguenza */
		if (sbagliato) {
			printf("La matrice non è un quadrato magico\n");
		}
		else {
			printf("La matrice è un quadrato magico\n");
			break;
		}
	}
	getch();
	return;
}