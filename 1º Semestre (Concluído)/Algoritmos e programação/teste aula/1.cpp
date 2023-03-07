// percorre o vetor ao contrário

#include<stdio.h>

int main() {
    int vet1[10];
    for (int x=0; x<10; x++) {
        printf("Indice %d - Digite um inteiro:", x);
        scanf("%d%*c", &vet1[x]);
    }
    printf("\n \n -- Valores digitados -- \n  \n Vetor 2(Invertido)\n \n");
    for (int y=9;y>=0;y--) {
        printf("Indice: %d - Valor %d \n", y, vet1[y]);
    }
    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <windows.h>
// #include <string.h>

// int main()
// {
//     UINT CPAGE_UTF8 = 65001;
//     SetConsoleOutputCP(CPAGE_UTF8);

//     char nome[10];
//     char sobrenome[]="Rosa"; 
//     char meio[]={'D','a'};
//     char nomeCompleto[20];

//     printf("Digite o nome:");
//     gets(nome);

//     printf("%s %s", nome, meio, sobrenome);

//     if (strcmp(nome, "Felipe")==0) {
//         printf("\nNomes iguais\n");
//     }else{
//         printf("\nNomes diferentes\n");
//     }
//     strcat(nomeCompleto, nome);
//     strcat(nomeCompleto, " ");
//     strcat(nomeCompleto, sobrenome);

//     printf("Seu nome completo é: %s\n", strupr(nomeCompleto));


    // strcpy() //

    //char outroNome[10];
    //int tam=0;
    //strcpy(outroNome, nome);

    //int tam=strlen(nomeCompleto);
    //printf("\nO tamanho é: %d", tam);

//}