#include "../useful.h"

#define N 3

int main() {
	puts("Bubble sort");
	int a[N], i, j, temp;
	puts("Riempi l\'array");
	//fillArray(a, N);
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < N; i++) {
		temp = a[i];
		j = i - 1;
		while (j >= 0 && temp > a[j]) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
	//printArray(a, N);
	for (i = 0; i < N; i++) {
		printf("%d\t", a[i]);
	}
	getch();
	return;
}