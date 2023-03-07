#include <windows.h>
#include <stdlib.h>
#include <math.h>

int main()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    
    float peso_saco, racao_gato1, racao_gato2, total_final;

    printf("digite o peso do saco em kg\n");
    scanf("%f", &peso_saco);
    printf("digite a quantidae de racao para o gato um\n");
    scanf("%f", &racao_gato1);
     printf("digite a quantidae de racao para o gato dois\n");
    scanf("%f", &racao_gato2);

    racao_gato1 = racao_gato1 /1000;
    racao_gato2 = racao_gato2 /1000;
    total_final = peso_saco - 5 * (racao_gato1 + racao_gato2);

    printf("o valor restante de racao e:%.2f\n", total_final);

    return 0;
}

//Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a
//quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a 
//mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para 
//cada gato, calcule e mostre quanto restará de ração no saco após cinco dias