#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>

int main()
{
	UINT CPAGE_UTF8 = 65001;
	SetConsoleOutputCP(CPAGE_UTF8);

	int i, contador = 0;
	char string[50], c;

	printf("Digite uma string: ");
	gets(string);

	printf("Informe um caractere da string: ");
	scanf("%c", &c);

	for (i = 0; string[i] != '\0'; i++) {
		if (string[i] == c)
			contador++;
	}

	if (contador == 0) {
		printf("Caractere Inválido!\n");
	}
	else {
		printf("Contagem de caracteres = %d\n", contador);
	}
}

// FUP que leia uma string e um caracter, o programa deve informar quantas vezes o caracter lido aparece na string.