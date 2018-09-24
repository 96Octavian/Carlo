/* Inserisci D valori in un array e controlla se è ordinato */

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
	puts("L'array è:");
	printArray(array, D);

	/* Controlla se ogni elemento è minore del successivo */
	for (i = 0; i < D - 1 && disordinato == 0; i++) {
		if (array[i] > array[i + 1]) disordinato = 1;	// Se è maggiore imposta il flag
	}

	/* Controlla il flag */
	if (disordinato) puts("L'array non è ordinato");
	else puts("L'array è ordinato in ordine crescente");

	return 0;
}