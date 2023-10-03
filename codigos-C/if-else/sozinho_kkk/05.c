#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int ano;


    printf("Olá, digite um ano:");
    scanf("%i", &ano);

    if ((ano % 4 == 0 && ano % 100 !=0))
    {
        printf("É um ano bissexto!");
    }

    else
    {
        printf("Não é um ano bissexto!");
    }
    

}