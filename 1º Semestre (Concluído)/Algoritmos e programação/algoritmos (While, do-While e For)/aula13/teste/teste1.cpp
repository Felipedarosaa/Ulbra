#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

  int i, matr; char nome;

float n1, n2, n3, media;

for (i = 0; i <= 10; i++) { 
n1, n2, n3, matr=8;

printf("\nNome do aluno: ");

scanf("%c", &nome);

printf("\nmatricula: ");

scanf("%d", &matr);

printf("\nNota 1: ");

scanf("%f", &n1);

printf("\nNota 2: ");

scanf("%f", &n2);

printf("\nNota 3: ");

scanf("%f", &n3);

media= n1+n2+n3/3;

if (n1 >= 7)

printf("\nmedia Sf, aprovado", media);

else printf("\nmedia L.Xf, reprovado", n2);

}

}