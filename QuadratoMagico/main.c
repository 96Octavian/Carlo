#include "../useful.h"

#define N 5

int main() {
	int M[N][N], somma = 0, sbagliato = 0;
	while (1) {
		randMatrix(N, N, &(M[0][0]), 10, 0);
		printMatrix(N, N, &(M[0][0]));
		for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {
				somma += M[i][j];
			}
			if (somma != 1 / 2 * N*(N*N + 1)) {
				sbagliato = 1;
			}
		}

		for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {
				somma += M[j][i];
			}
			if (somma != 1 / 2 * N*(N*N + 1)) {
				sbagliato = 1;
			}
		}
		if (sbagliato) {
			printf("La matrice non è un quadrato magico\n");
		}
		else {
			printf("La matrice è un quadrato magico\n");
			break;
		}
//		Sleep(1);
	}
	getch();
	return;
}