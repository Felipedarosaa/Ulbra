#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()  
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    
    int vet1[8], x, y, soma;

for(int i=0; i<8; i++)
{
printf("Digite os dados do vetor:", i+1);
scanf("%d", &vet1);
}

printf("Digite o número da 1ª posição:");
scanf("%d", &x);


printf("Digite o número da 2ª posição:");
scanf("%d", &y);

soma = x + y;

printf("Resultado: %d\n", soma);

return 0;

}

//Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final, seu programa deverá escrever a soma dos valores encontrados nas respectivas posições  X e Y . 
