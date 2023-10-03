#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <strings.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int unidadei, unidadef;
    float valor, conversao;

    printf("Olá, seja bem-vindo a calculadora de conversão de unidades de medida!\n");
    printf("Qual é a sua unidade inicial?\n1. Metros\n2. Centímetros\n3. Polegadas\n");
    scanf("%i", &unidadei);

    switch (unidadei)
    {
        case 1:
            printf("Ok, e qual é a unidade de destino?");
            scanf("%i", &unidadef);
            switch (unidadef)
            {
            case 1:
                /* code */
                break;
            
            default:
                break;
            }

    }



    

}