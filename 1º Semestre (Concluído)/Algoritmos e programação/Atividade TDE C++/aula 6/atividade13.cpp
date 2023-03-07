#include <stdio.h>
#include <math.h>
#include <windows.h>

int main ()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int tabuada = 0;

    printf("digite o número da tabuada que você deseja: \n");
    scanf("%i", &tabuada);

    for (int x = 1; x<= 10; ++x){
        //1 x 5 = 5

        printf("%ix%i = %i\n", x, tabuada, x * tabuada);
    }

    return 0;
}