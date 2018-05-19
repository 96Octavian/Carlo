/*Bubble sort su un array preso da user input
*/

#include "../useful.h"

#define N 3

int main() {
	int a[N], i, j, temp;
	
	/* Riempiamo l'array con l'input da utente */
	puts("Riempi l\'array");
	fillArray(a, N);

	/* Bubble sort */
	for (i = 0; i < N; i++) {
		temp = a[i];
		j = i - 1;
		while (j >= 0 && temp > a[j]) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}

	/* Stampiamo l'array ordinato */
	printArray(a, N);

	getch();
	return;
}