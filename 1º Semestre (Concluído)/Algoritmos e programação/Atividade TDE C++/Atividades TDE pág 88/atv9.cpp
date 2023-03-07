#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);


    float credEspec, saldoMed, novoSaldo;

    printf("Digite o valor do seu saldo médio:R$\n");
    scanf("%f", &saldoMed);

    if (saldoMed > 400) {
        printf("Você teve um crédito especial de 30 porcento do saldo médio!\n");
        credEspec = (saldoMed*30)/100;
        novoSaldo = (saldoMed*30)/100 + saldoMed;

        printf("O valor do crédito é de:R$%.2f\n", credEspec);
        printf("O seu novo saldo é de:R$%.2f\n", novoSaldo);
    }
    else if (saldoMed <= 400 && saldoMed > 300) {
        printf("Você teve um crédito especial de 25 porcento do saldo médio!\n");
        credEspec = (saldoMed*25)/100;
        novoSaldo = (saldoMed*25)/100 + saldoMed;

        printf("O valor do crédito é de:R$%.2f\n", credEspec);
        printf("O seu novo saldo é de:R$%.2f\n", novoSaldo);
    }
    else if (saldoMed <= 300 && saldoMed > 200) {
        printf("Você teve um crédito especial de 20 porcento do saldo médio!\n");
        credEspec = (saldoMed*20)/100;
        novoSaldo = (saldoMed*20)/100 + saldoMed;

        printf("O valor do crédito é de:R$%.2f\n", credEspec);
        printf("O seu novo saldo é de:R$%.2f\n", novoSaldo);
    }
    else if (saldoMed <= 200) {
        printf("Você teve um crédito especial de 10 porcento do saldo médio!\n");
        credEspec = (saldoMed*10)/100;
        novoSaldo = (saldoMed*10)/100 + saldoMed;

        printf("O valor do crédito é de:R$%.2f\n", credEspec);
        printf("O seu novo saldo é de:R$%.2f\n", novoSaldo);
    }

    return 0;
}