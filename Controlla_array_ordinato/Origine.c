/* Inserisci D valori in un array e controlla se � ordinato */

#include <stdio.h>
#include "../useful.h"

#define D 7

int main(void) {
	int array[D], i, disordinato = 0;

	/* Inserisci i numeri da stdin */
	for (i = 0; i < D; i++) {
		printf("Inserisci numero: ");
		scanf("%d", &array[i]);
	}

	/* Stampa l'array */
	puts("L'array �:");
	printArray(array, D);

	/* Controlla se ogni elemento � minore del successivo */
	for (i = 0; i < D - 1 && disordinato == 0; i++) {
		if (array[i] > array[i + 1]) disordinato = 1;	// Se � maggiore imposta il flag
	}

	/* Controlla il flag */
	if (disordinato) puts("L'array non � ordinato");
	else puts("L'array � ordinato in ordine crescente");

	return 0;
}