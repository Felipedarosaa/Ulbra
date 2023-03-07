#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int i=0; 
    int senha;

    do
    {
        printf("Digite a Senha:\n");
        scanf("%d%*c", &senha);
        
        if (senha==1234) {
        printf("ACESSO PERMITIDO\n");
        }
        else if (senha!=1234) {
        printf("ACESSO NEGADO!\n");
        i++;
        }
    } while (senha!=1234);
        printf("A senha foi inserida %.d vezes\n", i);
}


//Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234.7

//OBS: Se a senha informada pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve ser impressa e repetida a solicitação de uma nova senha até que ela seja válida. Caso contrário deve ser impressa a mensagem "ACESSO PERMITIDO" junto com um número que representa quantas vezes a senha foi informada.
