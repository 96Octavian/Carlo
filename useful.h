#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#pragma warning(disable:4996)

int i, j;

void printArray(int *a, int len) {
	printf("|");
	for (i = 0; i < len; i++) {
		printf(" %d |", a[i]);
	}
	puts("");
}
void fillArray(int *a, int len) {
	for (i = 0; i < len; i++) {
		scanf("%d", &a[i]);
	}
}
void printMatrix(int row, int col, int *M) {
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d ", M[i*row + j]);
		}
		puts("");
	}
}
void fillMatrix(int row, int col, int *M) {
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			scanf("%d", &M[i*row + j]);
		}
	}
}
void randMatrix(int row, int col, int *M, int max, int min) {
	srand((unsigned)time(NULL));
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			M[i*row + j] = rand() % (max - min + 1) + min;
		}
	}
}