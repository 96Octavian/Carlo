/* Esercizio della verifica di cui sinceramente non ho capito alcuni
 * passaggi e nemmeno l'utilità
 */

#include "../useful.h"
#define R 10
#define C 10

main() {
	int Mat[R][C], b[R], i, j, k = 0;

	/* Popoliamo la matrice */
	randMatrix(R, C, &(Mat[0][0]), 0, 10);

	/* Stampiamo la matrice */
	printMatrix(R, C, &(Mat[0][0]));

	/* Copiamo elementi nell'array b[] ma non capisco secondo quale criterio boh */
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			if (Mat[i][j] % 2 != 0 && k < R) {
				b[k] = Mat[i][j];
				k++;
			}
		}
	}

	/* Stampiamo tutte le posizioni di un numero scelto a caso */
	int trovato = 0;
	int ricercato = rand() % 3671 + 897;
	for (i = 0; i < R; i++) {
		if (b[i] == ricercato) {
			printf("Il numero %d è nella posizione %d\n", ricercato, i);
			trovato = 1;
		}
	}
	if (!trovato) {
		printf("Il numero %d non è presente\n", ricercato);
	}

	/* Selezioniamo la riga in mezzo */
	int rigamedia = (R - 1) / 2;
	/* Stampiamola prima della modifica */
	printf("La riga media iniziale è ");
	for (i = 0; i < R; i++) {
		printf("%d\t", Mat[rigamedia][i]);
	}
	puts("");

	/* Eleviamo ogni elemento al quadrato */
	for (j = 0; j < C; j++) {
		Mat[rigamedia][j] = Mat[rigamedia][j] * Mat[rigamedia][j];
	}

	/* stampiamo la riga modificata */
	printf("La riga media modificata è ");
	for (i = 0; i < R; i++) {
		printf("%d\t", Mat[rigamedia][i]);
	}
	puts("");
	system("pause");
}