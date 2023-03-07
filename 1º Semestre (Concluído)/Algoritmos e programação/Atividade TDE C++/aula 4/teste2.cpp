#include <stdio.h>
#include <math.h>
#include <windows.h>
int main()
{
      UINT CPAGE_UTF8 = 65001;
      SetConsoleOutputCP(CPAGE_UTF8);

      int media, nota1, nota2, nota3;

      printf("digite o valor de nota1;\n");
      scanf("%d%*c", &nota1);
      printf("digite o valor de nota2;\n");
      scanf("%d%*c", &nota2);
      printf("digite o valor de nota3;\n");
      scanf("%d%*c", &nota3);

      media = (nota1 + nota2 + nota3) / 3;

      printf("A media é: %.i\n", media);

      if (media >= 7)
      {
            printf("Você foi aprovado!\n");
            printf("Parabéns!\n");
      }
      else
      {
            printf("Você foi reprovado!\n");
      }

            printf("Feliz Férias");

      return 0;
}

// Faça um programa que receba três notas, calcule e mostre a média aritmética.