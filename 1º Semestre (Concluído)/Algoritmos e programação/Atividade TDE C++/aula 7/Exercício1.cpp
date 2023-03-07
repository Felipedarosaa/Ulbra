#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float notaTrab, avalSem, exameFinal, media;

    printf("Digite a nota do trabalho:\n");
    scanf("%f", &notaTrab);

    printf("Digite a nota da avaliação semestral:\n");
    scanf("%f", &avalSem);

    printf("Digite a nota do exame final:\n");
    scanf("%f", &exameFinal);

    media = (notaTrab*2 + avalSem*3 + exameFinal*5)/10;

    printf("A média é: %.2f\n", media);


    if(media>=8 && media<=10){
        printf("Obteve o conceito A\n");
    }

    if(media >=7 && media < 8) {
        printf("Obteve o conceito B\n");
    }

    if (media>=6 && media<7) {
        printf("Obteve o conceito C\n");
    }

    if (media>=5 && media <6) {
        printf("Obteve o conceito D\n");
    }

    if (media>=0 && media <5) {
        printf("Obteve o conceito E\n");
    }
    
return 0;

}