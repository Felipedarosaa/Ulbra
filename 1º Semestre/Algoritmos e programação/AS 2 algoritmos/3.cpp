#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <assert.h>

int main()
{

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    char palavra[20];
    int i, qtdVogais = 0, tamanho = 0;

    printf("Digite uma palavra:\n");
    scanf("%s", palavra);

    for (i = 0; i < palavra[i]; i++) {

        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            qtdVogais++;
        }
    }

    tamanho = strlen(palavra);
    printf("A palavra %s possui %d Letras e %d Vogais\n", palavra, tamanho, qtdVogais);

    return 0;
}

//  Fazer um algorítimo que seja lido uma palavra e imprima:
// A quantidade de vogais que compõe a palavra.
// A quantidade de letras dessa palavra.
