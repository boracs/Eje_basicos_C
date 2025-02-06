




#include<stdio.h>
#include<Windows.h>



int palindromo(char frase[], int  n);

main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	printf("Dame una frase y te dire si es palindroma o no:\n");
	char frase[200] = "";
	gets(frase);

	if (palindromo(frase, strlen(frase)) == 1){
		printf("La frase es palindroma\n");
	} else {
		printf("No es palindroma\n");
	}
}
int palindromo(char frase[], int n) {
	int diferente = 0;
	for (int i = 0; i < strlen(frase)/2; i++) {
		if (frase[i] != frase[n-i-1]) {
			return 0;
		}
	}
	return 1;
}
