#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

  int valores[10], quadrado[10];

    for(int i=0;i<10;i++){
    printf("Informe um valor real:\n");
    scanf("%d",&valores[i]);

    quadrado[i]=valores[i]*valores[i];

    printf("%.d e o seu quadrado é: %.d\n",valores[i],quadrado[i]);
}
    return 0;
}

//Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos. 