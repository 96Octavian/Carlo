/* Controlla se una sequenza di numeri inseriti, terminante con 0, ha più di due divisori in 
 * 2, 3, 5, 7, 11
 */

#include <stdio.h>
#include <stdlib.h>
#include "../useful.h"

int main(void) {
	int num, num_divisori;

	printf("Inserisci un numero: ");
	scanf("%d", &num);
	while (num) { // In C 0 significa falso, quindi ogni altro valore di num va bene per il nostro ciclo
		num_divisori = 0;

		/* Ogni volta che un divisore viene trovato
		aumentiamo un contatore */
		if (num % 2 == 0) num_divisori++;
		if (num % 3 == 0) num_divisori++;
		if (num % 5 == 0) num_divisori++;
		if (num % 7 == 0) num_divisori++;
		if (num % 11 == 0) num_divisori++;
		// ...

		/* Controlliamo il risultato finale */
		if (num_divisori >= 2) printf("%d ha almeno due divisori\n", num);
		else if (num_divisori == 1) printf("%d ha un solo divisore\n", num);
		else printf("%d non ha divisori tra quelli scelti\n", num);

		/* Iniziamo di nuovo il ciclo */
		printf("Inserisci un numero: ");
		scanf("%d", &num);
	}
	return 0;
}