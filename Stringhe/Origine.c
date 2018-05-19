#include <stdio.h>

int main() {
	int parole = 0, vocali = 0, consonanti = 0;
	char stringa[] = "Carlo sei proprio un ciula, studia babbione";
	for (int i = 0; stringa[i] != '\0'; ++i) {
		if (stringa[i] == 'a' || stringa[i] == 'e' || stringa[i] == 'i' || stringa[i] == 'o' || stringa[i] == 'u' ||
			stringa[i] == 'A' || stringa[i] == 'E' || stringa[i] == 'I' || stringa[i] == 'O' || stringa[i] == 'U')
			++vocali;
		else if (stringa[i] == ' ')
			++parole;
		else
			++consonanti;
	}
	printf("Nella frase \"%s\" ci sono %d parole\n", stringa, ++parole);
	printf("Ci sono %d vocali e %d consonanti\n", vocali, consonanti);
	system("pause");
}