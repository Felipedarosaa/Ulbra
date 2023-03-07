#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    char 1letra[2];
    char 2Letras[3];
    char 3Letras[4];
    char 4Letras[5];


}

//FUP que leia uma string e construa sua escrita, caracter a caracter, em maiúsculo. Por exemplo, lê casa escreve:
// C
// CA
// CAS
// CASA
